import java.io.IOException;
import java.net.URISyntaxException;
import java.nio.file.Files;
import java.nio.file.Path;
import java.util.Collections;
import java.util.stream.Stream;

import org.apache.commons.io.FileUtils;
import org.junit.jupiter.api.Assertions;
import org.junit.jupiter.api.DynamicTest;
import org.junit.jupiter.api.TestFactory;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.strategoxt.lang.StrategoExit;
import org.strategoxt.strj.strj;

import mb.junit_bridge.StrjTests;

public class TestsFromResources extends StrjTests {
    @TestFactory Stream<DynamicTest> libtest1() throws URISyntaxException, IOException {
        final Path strjUnderTest = getStrjUnderTest();
        System.setProperty("user.dir", getTestResourcePath().toAbsolutePath().toString());
        return streamStrFilesFromResources().map(p -> {
            final String fileName = p.getFileName().toString();
            final String baseName = fileName.substring(0, fileName.length() - 4); // strip .str
            final Path testGenDir = p.resolveSibling(baseName + "/test-gen");
            final Path packageDir = testGenDir.resolve("org/test");
            return DynamicTest.dynamicTest("Compile & run " + baseName, () -> {
                FileUtils.deleteDirectory(testGenDir.toFile());
                Files.createDirectories(packageDir);
                Assertions.assertTrue(strj(p, baseName, packageDir), "Compilation with strj expected to succeed");
                Assertions.assertTrue(
                    javac(testGenDir, javaFiles(packageDir), Collections.singletonList(strjUnderTest.toFile())),
                    "Compilation with javac expected to succeed");
                Assertions.assertTrue(java(testGenDir + ":" + strjUnderTest, "org.test.Main"),
                    "Running java expected to succeed");
            });
        });
    }

    private boolean strj(Path input, String baseName, Path packageDir) {
        strj.init();
        final IStrategoTerm result;
        try {
            //@formatter:off
            result = strj.mainNoExit(
                "-i", input.toString(),
                "-o", packageDir.resolve("Main.java").toString(),
                "-p", "org.test",
                "-la", "stratego-lib",
                "-D", "VERSION_TERM=\"${version}\"",
                "-D", "SVN_REVISION_TERM=\"${revision}\"",
                "-I", "../../src/main/strategies",
                "-I", "../../src/main/strategies/ssl-compat",
                "-m", "main-" + baseName,
                "--verbose", "error"
            );
            //@formatter:on
        } catch(StrategoExit exit) {
            return exit.getValue() == 0;
        }
        return result != null;
    }

}
