package mb.junit_bridge;

import java.io.BufferedReader;
import java.io.File;
import java.io.IOException;
import java.io.InputStreamReader;
import java.net.URISyntaxException;
import java.nio.file.DirectoryStream;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import java.util.stream.Stream;
import java.util.stream.StreamSupport;

import javax.tools.JavaCompiler;
import javax.tools.JavaFileObject;
import javax.tools.StandardJavaFileManager;
import javax.tools.StandardLocation;
import javax.tools.ToolProvider;

public class StrjTests {
    protected static Path getStrjUnderTest() {
        return Paths.get(System.getProperty("strj-sut"));
    }

    private static Stream<Path> streamStrategoFiles(Path testResourcePath) throws IOException {
        return StreamSupport.stream(Files.newDirectoryStream(testResourcePath,
            p -> Files.isRegularFile(p) && p.getFileName().toString().endsWith(".str")).spliterator(), false);
    }

    protected static boolean javac(Path dest, Iterable<? extends File> sourceFiles, Iterable<? extends File> classPath)
        throws IOException {
        final JavaCompiler compiler = ToolProvider.getSystemJavaCompiler();
        try(StandardJavaFileManager fileManager = compiler.getStandardFileManager(null, null, null)) {
            final Iterable<? extends JavaFileObject> compilationUnits =
                fileManager.getJavaFileObjectsFromFiles(sourceFiles);
            fileManager.setLocation(StandardLocation.CLASS_OUTPUT, Collections.singletonList(dest.toFile()));
            fileManager.setLocation(StandardLocation.CLASS_PATH, classPath);
            final JavaCompiler.CompilationTask task =
                compiler.getTask(null, fileManager, null, null, null, compilationUnits);
            return task.call();
        }
    }

    protected static boolean java(String classPath, String mainClass) throws IOException, InterruptedException {
        final Path java = Paths.get(System.getProperty("java.home")).resolve("bin/java");
        final ProcessBuilder processBuilder = new ProcessBuilder(java.toString(), "-cp", classPath, mainClass);
//        processBuilder.redirectErrorStream(true);
        final Process process = processBuilder.start();
        try(BufferedReader br = new BufferedReader(new InputStreamReader(process.getErrorStream()))) {
            String line;
            while((line = br.readLine()) != null) {
                System.err.println(line);
            }
        } catch(IOException ioe) {
            ioe.printStackTrace();
        }
        final int result = process.waitFor();
        return result == 0;
    }

    protected Stream<Path> streamStrFilesFromResources() throws URISyntaxException, IOException {
        return StrjTests.streamStrategoFiles(getTestResourcePath());
    }

    protected Path getTestResourcePath() throws URISyntaxException {
        return Paths.get(this.getClass().getResource(".").toURI());
    }

    protected static Iterable<? extends File> javaFiles(Path packageDir) throws IOException {
        final List<File> result = new ArrayList<>();
        try(DirectoryStream<Path> javaPaths = Files.newDirectoryStream(packageDir,
            p -> Files.isRegularFile(p) && p.getFileName().toString().endsWith(".java"))) {
            for(Path javaPath : javaPaths) {
                result.add(javaPath.toFile());
            }
        }
        return result;
    }
}
