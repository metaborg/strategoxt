// !! THIS FILE WAS GENERATED USING repoman !!
// Modify `repo.yaml` instead and use `repoman` to update this file
// See: https://github.com/metaborg/metaborg-gradle/

import org.metaborg.convention.Person
import org.metaborg.convention.MavenPublishConventionExtension

// Workaround for issue: https://youtrack.jetbrains.com/issue/KTIJ-19369
@Suppress("DSL_SCOPE_VIOLATION")
plugins {
    id("org.metaborg.convention.root-project")
    alias(libs.plugins.gitonium)
}

rootProjectConvention {
    // Add `publishAll` and `publish` tasks that delegate to the subprojects and included builds.
    registerPublishTasks.set(true)
}
allprojects {
    apply(plugin = "org.metaborg.gitonium")

    // Configure Gitonium before setting the version
    gitonium {
        mainBranch.set("master")
    }
    version = gitonium.version
    group = "org.metaborg.devenv"

    pluginManager.withPlugin("org.metaborg.convention.maven-publish") {
        extensions.configure(MavenPublishConventionExtension::class.java) {
            repoOwner.set("metaborg")
            repoName.set("strategoxt")

            metadata {
                inceptionYear.set("1998")
                developers.set(listOf(
                    Person("Jeff Smits", email = null, id = "Apanatshka"),
                ))
                contributors.set(listOf(
                    Person("Martin Bravenboer", email = null, id = "mbravenboer"),
                    Person("Eelco Visser", email = null, id = "eelcovisser"),
                    Person("Merijn de Jonge", email = null, id = "merijndejonge"),
                    Person("Lennart Kats", email = null, id = "lennartcl"),
                    Person("Rob Vermaas", email = null, id = "rbvermaa"),
                    Person("Vlad Vergu", email = null, id = "vvergu"),
                    Person("Jeff Smits", email = null, id = "Apanatshka"),
                    Person("Karl Trygve Kalleberg", email = null, id = "karltk"),
                    Person("Gabriel Konat", email = null, id = "Gohla"),
                    Person("Arthur van Dam", email = null, id = "arthurvd"),
                    Person("Eelco Dolstra", email = null, id = "edolstra"),
                    Person("Joost Visser", email = null, id = "jstvssr"),
                    Person("Daniel A. A. Pelsmaeker", email = null, id = "Virtlink"),
                ))
            }
        }
    }
}
