package org.metaborg.runtime.task;

import java.io.File;
import java.io.FileOutputStream;
import java.io.IOException;
import java.lang.ref.WeakReference;
import java.net.URI;
import java.security.NoSuchAlgorithmException;
import java.util.HashMap;
import java.util.Map;

import org.metaborg.runtime.task.digest.NonDeterministicCountingTermDigester;
import org.spoofax.interpreter.library.IOAgent;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.spoofax.interpreter.terms.ITermFactory;
import org.spoofax.terms.io.binary.SAFWriter;
import org.spoofax.terms.io.binary.TermReader;

public class TaskManager {
	private static final TaskManager INSTANCE = new TaskManager();
	private static final Map<URI, WeakReference<TaskEngine>> taskEngineCache =
		new HashMap<URI, WeakReference<TaskEngine>>();
	private final static TaskEngineFactory taskEngineFactory = new TaskEngineFactory();

	private final ThreadLocal<TaskEngine> current = new ThreadLocal<TaskEngine>();
	private final ThreadLocal<URI> currentProject = new ThreadLocal<URI>();

	private TaskManager() {
		// use getInstance()
	}

	public static TaskManager getInstance() {
		return INSTANCE;
	}

	public TaskEngine getCurrent() {
		ensureInitialized();
		return current.get();
	}

	public boolean isInitialized() {
		return current.get() != null;
	}

	private void ensureInitialized() {
		if(!isInitialized())
			throw new IllegalStateException(
				"Task engine has not been set-up, use task-setup(|project-path) to set up the task system before use.");
	}

	public TaskEngine createTaskEngine(ITermFactory factory) {
		final TaskEngine taskEngine = new TaskEngine(factory, new NonDeterministicCountingTermDigester());
		taskEngine.setEvaluator(new TaskEvaluator(taskEngine, factory));
		return taskEngine;
	}

	public TaskEngine loadTaskEngine(String projectPath, ITermFactory factory, IOAgent agent)
		throws NoSuchAlgorithmException {
		URI project = getProjectURI(projectPath, agent);
		synchronized(TaskManager.class) {
			WeakReference<TaskEngine> taskEngineRef = taskEngineCache.get(project);
			TaskEngine taskEngine = taskEngineRef == null ? null : taskEngineRef.get();
			if(taskEngine == null) {
				taskEngine = tryReadFromFile(getFile(project), factory);
			}
			if(taskEngine == null) {
				taskEngine = createTaskEngine(factory);
			}
			taskEngineCache.put(project, new WeakReference<TaskEngine>(taskEngine));
			current.set(taskEngine);
			currentProject.set(project);
			return taskEngine;
		}
	}

	public void unloadTaskEngine(String removedProjectPath, IOAgent agent) {
		URI removedProject = getProjectURI(removedProjectPath, agent);
		synchronized(TaskManager.class) {
			WeakReference<TaskEngine> removedTaskEngine = taskEngineCache.remove(removedProject);

			TaskEngine taskEngine = current.get();
			if(taskEngine != null && taskEngine == removedTaskEngine.get()) {
				current.set(null);
			}

			URI project = currentProject.get();
			if(project != null && project.equals(removedProject)) {
				currentProject.set(null);
			}
		}
	}

	private URI getProjectURI(String projectPath, IOAgent agent) {
		File file = new File(projectPath);
		if(!file.isAbsolute())
			file = new File(agent.getWorkingDir(), projectPath);
		return file.toURI();
	}

	public TaskEngine tryReadFromFile(File file, ITermFactory factory) {
		try {
			TaskEngine taskEngine = createTaskEngine(factory);
			IStrategoTerm tasks = new TermReader(factory).parseFromFile(file.toString());
			return taskEngineFactory.fromTerms(taskEngine, tasks, factory);
		} catch(Exception e) {
			return null;
		}
	}

	public void storeCurrent(ITermFactory factory) throws IOException {
		File file = getFile(currentProject.get());
		IStrategoTerm tasks = taskEngineFactory.toTerm(getCurrent(), factory);
		file.createNewFile();
		FileOutputStream fos = new FileOutputStream(file);
		try {
			SAFWriter.writeTermToSAFStream(tasks, fos);
			fos.flush();
		} finally {
			fos.close();
		}
	}

	private File getFile(URI project) {
		File container = new File(new File(project), ".cache");
		container.mkdirs();
		return new File(container, "taskengine.idx");
	}
}
