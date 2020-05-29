import qbs

CppApplication {
    consoleApplication: true
    files: [
        "ex01.cpp",
        "ex01.hpp",
        "ex02.cpp",
        "ex02.hpp",
        "ex03.cpp",
        "ex03.hpp",
        "ex04.cpp",
        "ex04.hpp",
        "ex05.cpp",
        "ex05.hpp",
        "ex06.cpp",
        "ex06.hpp",
        "ex07.cpp",
        "ex07.hpp",
        "ex08.cpp",
        "ex08.hpp",
        "ex09.cpp",
        "ex09.hpp",
        "ex10.cpp",
        "ex10.hpp",
        "ex11.cpp",
        "ex11.h",
        "main.cpp",
    ]

    Group {     // Properties for the produced executable
        fileTagsFilter: "application"
        qbs.install: true
        qbs.installDir: "bin"
    }
}
