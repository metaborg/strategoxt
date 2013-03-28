# Creating Java libraries
Making a library that is implemented in Java and can be used in Spoofax languages. Debugging is supported.

1. Copy this project and rename-refactor in Eclipse (Import existing project + copy into workspace & rename project and packages)
2. Implement your things, linking all *Strategy* implementations into the *InteropRegisterer*. Let's say that all you classes are  in packages with prefix *org.library.liblib*.
3. Export the project as a Jar, say *liblib.jar*.
4. Copy the Jar to your language's project, say in *lib/liblibjar*.
5. Add the following two entries to *build.main.xml*:

    <property name="externaljarflags" value="-la org.library.liblib"/>
    <property name="externaljar" location="lib/liblib.jar"/>

6. Add the following to *LANGNAME-Builders.esv*:

     provider : lib/liblib.jar

This should cause everything to be built together. You can debug  library code by placing breakpoints in the sources that produced the *liblib.jar*.
