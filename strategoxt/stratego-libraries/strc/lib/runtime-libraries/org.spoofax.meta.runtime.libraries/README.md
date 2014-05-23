# Runtime libraries

Stratego libraries for several components used in Spoofax.

## Update the generated runtime libraries in Spoofax

The runtime libraries are included into Spoofax projects by copying them into the project at generation time. 
This is kind of hack, but it works for now..
To update these libraries follow these steps:

* Clone the Spoofax project at https://github.com/metaborg/spoofax
* Import the `org.strategoxt.imp.generator` project into Eclipse
* Clone the stratego-printer repository at https://github.com/Gohla/stratego-printer, preferably next to the runtime-libraries repository
* Import the `org.metaborg.strategoprinter` project into Eclipse
* Go to the run configurations in Eclipse (menu Run -> Run Configurations...)
* Go to the `print-runtime-libraries` run configuration, under Java Application
* Check the first argument to see if it corresponds to your path, if you have checked out the stratego-printer next to the runtime-libraries repository, it does not need changing
* Run this run configuration, it will print a bunch of things to your console
* Copy the contents of the console (note: it could be that your console cannot fit all the text, to fix this go to Eclipse's preferences, Run/Debug -> Console, and untick `Limit console output`) 
* Open the `org.strategoxt.imp.generator\src\sdf2imp\project\create-runtime-libraries.str` file
* Replace the contents under `strategies` with the copied text

## Building

The runtime libraries are built to Stratego binary libraries, in rtree, ctree and jar format.
Requirements for building are:

* Ant
* Ant contrib: http://sourceforge.net/projects/ant-contrib/files/ant-contrib/ant-contrib-0.6/
* Java compiler
* Stratego compiler: https://github.com/metaborg/strategoxt/tree/java-bootstrap/strategoxt
* Stratego ant library: https://github.com/metaborg/strategoxt/blob/java-bootstrap/strategoxt/ant-contrib/strategoxt-antlib.xml

The Stratego ant library needs to be copied into this directory.
To build from command line, invoke the ant script `build.xml` with the `eclipse.spoofaximp.strategojar` property set to the strategoxt jar file, which contains the stratego compiler.
To build from Eclipse with Spoofax installed, right click `build.xml`, choose `Run As -> Ant Build`.
