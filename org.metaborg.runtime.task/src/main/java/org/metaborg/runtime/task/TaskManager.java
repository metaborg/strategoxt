package org.metaborg.runtime.task;

import java.io.File;
import java.io.IOException;
import java.lang.ref.WeakReference;
import java.net.URI;
import java.util.HashMap;
import java.util.Map;

import org.spoofax.interpreter.library.IOAgent;
import org.spoofax.interpreter.terms.ITermFactory;

public class TaskManager {
	private static Map<URI, WeakReference<TaskEngine>> taskEngineCache = new HashMap<URI, WeakReference<TaskEngine>>();

	private ThreadLocal<TaskEngine> current = new ThreadLocal<TaskEngine>();

	public TaskEngine getCurrent() {
		ensureInitialized();
		return current.get();
	}

	public boolean isInitialized() {
		return current.get() != null;
	}

	private void ensureInitialized() {
		if(!isInitialized())
			throw new IllegalStateException("Task engine has not been set-up yet.");
	}

	public TaskEngine loadTaskEngine(String projectPath, ITermFactory factory, IOAgent agent) {
        File file = new File(projectPath);
        if(!file.isAbsolute())
            file = new File(agent.getWorkingDir(), projectPath);
        URI project = file.toURI();
        
		synchronized(TaskManager.class) {
			WeakReference<TaskEngine> taskEngineRef = taskEngineCache.get(project);
			TaskEngine taskEngine = taskEngineRef == null ? null : taskEngineRef.get();
			if(taskEngine == null) {
				taskEngine = tryReadFromFile(getFile(project), factory);
			}
			if(taskEngine == null) {
				taskEngine = new TaskEngine(factory);
			}
			taskEngineCache.put(project, new WeakReference<TaskEngine>(taskEngine));
			current.set(taskEngine);
			return taskEngine;
		}
	}
	
    public TaskEngine tryReadFromFile(File file, ITermFactory factory) {
    	TaskEngine taskEngine = new TaskEngine(factory);
    	return taskEngine;
		// TODO: read from file.
    }

    public void storeCurrent(ITermFactory factory) throws IOException {
        // TODO: write from file
    }

    private File getFile(URI project) {
        File container = new File(new File(project), ".cache");
        container.mkdirs();
        return new File(container, "taskengine.idx");
    }
}
