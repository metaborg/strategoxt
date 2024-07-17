rootProject.name = "strategoxt-project"

dependencyResolutionManagement {
    repositories {
        maven("https://artifacts.metaborg.org/content/groups/public/")
        mavenCentral()
    }
}

pluginManagement {
    repositories {
        maven("https://artifacts.metaborg.org/content/groups/public/")
        gradlePluginPortal()
    }
}

plugins {
    id("org.metaborg.convention.settings") version "0.8.3"
}


include(":strj")
project(":strj").projectDir = file("strategoxt/stratego-libraries/java-backend/")
