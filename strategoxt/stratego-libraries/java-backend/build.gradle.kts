plugins {
    `java-library`
    `maven-publish`
    id("org.metaborg.convention.java")
    id("org.metaborg.convention.maven-publish")
}

group = "org.metaborg.devenv"

sourceSets {
    main {
        java {
            srcDir("java/runtime")
        }
    }
}

dependencies {
    api(platform(libs.metaborg.platform))

    api(libs.spoofax2.terms)
    api(libs.spoofax2.interpreter.core)
    api(libs.spoofax2.interpreter.library.xml)
    api(libs.spoofax2.interpreter.library.java)
    api(libs.spoofax2.interpreter.library.index)
    api(libs.spoofax2.interpreter.library.jsglr)
    api(libs.spoofax2.jsglr)

    // For bootstrapping:
    api(libs.strategoxt.strj)
//    api(libs.spoofax2.strategoxt)

    implementation(libs.jakarta.annotation)
}

mavenPublishConvention {
    repoOwner.set("metaborg")
    repoName.set("strategoxt")
}

publishing {
    publications {
        create<MavenPublication>("mavenJava") {
            from(components["java"])
        }
    }
}
