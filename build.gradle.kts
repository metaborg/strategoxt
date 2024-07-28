import org.metaborg.convention.MavenPublishConventionExtension

// Workaround for issue: https://youtrack.jetbrains.com/issue/KTIJ-19369
@Suppress("DSL_SCOPE_VIOLATION")
plugins {
    id("org.metaborg.convention.root-project")
    alias(libs.plugins.gitonium)
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
                inceptionYear.set("2000")
                developers.set(listOf(
                    Person("mbravenboer", "Martin Bravenboer", "martin.bravenboer@gmail.com"),
                    Person("eelcovisser", "Eelco Visser", "eelcovis@gmail.com"),
                    Person("merijndejonge", "Merijn de Jonge", "mdejonge@cwi.nl"),
                    Person("lennartcl", "Lennart Kats", "lclkats@gmail.com"),
                    Person("rbvermaa", "Rob Vermaas", "rob.vermaas@gmail.com"),
                    Person("vvergu", "Vlad Vergu", "v.vergu@gmail.com"),
                    Person("Apanatshka", "Jeff Smits", "mail@jeffsmits.net"),
                    Person("karltk", "Karl Trygve Kalleberg", "karltk@gmail.com"),
                    Person("Gohla", "Gabriel Konat", "gabrielkonat@gmail.com"),
                    Person("arthurvd", "Arthur van Dam", "eye@eye-home.net"),
                    Person("edolstra", "Eelco Dolstra", "eelco.dolstra@logicblox.com"),
                    Person("jstvssr", "Joost Visser", "j.visser@sig.eu"),
                    Person("Virtlink", "Daniel A. A. Pelsmaeker", "developer@pelsmaeker.net"),
                ))
            }
        }
    }
}
