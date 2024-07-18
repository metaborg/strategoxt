plugins {
    `java-library`
    `maven-publish`
    id("org.metaborg.convention.java")
    id("org.metaborg.convention.maven-publish")
}

sourceSets {
    main {
        java {
            srcDir("java/runtime")
        }
    }
}

dependencies {
    api(platform(libs.metaborg.platform)) { version { require("latest.integration") } }

    api(libs.spoofax.terms)
    api(libs.interpreter.core)
    api(libs.interpreter.library.xml)
    api(libs.interpreter.library.java)
    api(libs.interpreter.library.index)
    api(libs.interpreter.library.jsglr)
    api(libs.jsglr)

    // For bootstrapping:
    api(libs.strategoxt.minjar)

    implementation(libs.jakarta.annotation)
}

publishing {
    publications {
        create<MavenPublication>("mavenJava") {
            from(components["java"])
        }
    }
}
