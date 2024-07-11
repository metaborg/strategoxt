rootProject.name = "strategoxt-project"

pluginManagement {
    repositories {
        maven("https://artifacts.metaborg.org/content/groups/public/")
    }
}

plugins {
    id("org.metaborg.convention.settings") version "0.0.12"
}


include(":strj")
project(":strj").projectDir = file("strategoxt/stratego-libraries/java-backend/")
