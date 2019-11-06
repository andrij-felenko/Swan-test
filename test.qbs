import qbs 
import "../../qbs/app.qbs" as App

App {
    projectName: "swan"

    Depends { name: "Qt"; submodules: ["gui", "quick", "qml"] }
}
