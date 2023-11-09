plugins {
  id("org.metaborg.gradle.config.java-library")
}

sourceSets {
  main {
    java {
      srcDir("java/runtime")
    }
  }
}

fun compositeBuild(name: String) = "$group:$name:$version"
val spoofax2Version: String by ext
dependencies {
  api(platform("org.metaborg:parent:$spoofax2Version"))

  api(compositeBuild("org.spoofax.terms"))
  api(compositeBuild("org.spoofax.interpreter.core"))
  api(compositeBuild("org.spoofax.interpreter.library.xml"))
  api(compositeBuild("org.spoofax.interpreter.library.java"))
  api(compositeBuild("org.spoofax.interpreter.library.index"))
  api(compositeBuild("org.spoofax.jsglr"))
  api(compositeBuild("org.spoofax.interpreter.library.jsglr"))
  api("org.metaborg:strategoxt-min-jar:$spoofax2Version")

  implementation("jakarta.annotation:jakarta.annotation-api")
}

// TODO: copy the StrategoXT runnable JAR into project, which is exported as a resource? We probably do not need it in
// devenv/Spoofax 3, as we do not use the embedded StrategoXT JAR.
