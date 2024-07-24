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
                    Developer("hendrikvanantwerpen", "Martin Bravenboer", "martin.bravenboer@gmail.com"),
                    Developer("eelcovisser", "Eelco Visser", "eelcovis@gmail.com"),
                    Developer("merijndejonge", "Merijn de Jonge", "mdejonge@cwi.nl"),
                    Developer("lennartcl", "Lennart Kats", "lclkats@gmail.com"),
                    Developer("rbvermaa", "Rob Vermaas", "rob.vermaas@gmail.com"),
                    Developer("vvergu", "Vlad Vergu", "v.vergu@gmail.com"),
                    Developer("Apanatshka", "Jeff Smits", "mail@jeffsmits.net"),
                    Developer("karltk", "Karl Trygve Kalleberg", "karltk@gmail.com"),
                    Developer("Gohla", "Gabriel Konat", "gabrielkonat@gmail.com"),
                    Developer("arthurvd", "Arthur van Dam", "eye@eye-home.net"),
                    Developer("edolstra", "Eelco Dolstra", "eelco.dolstra@logicblox.com"),
                    Developer("jstvssr", "Joost Visser", "j.visser@sig.eu"),
                    Developer("Virtlink", "Daniel A. A. Pelsmaeker", "developer@pelsmaeker.net"),
                ))
            }
        }
    }
}
