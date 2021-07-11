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
        "ex12.cpp",
        "ex12.h",
        "ex13.cpp",
        "ex13.h",
        "ex14.cpp",
        "ex14.h",
        "ex15.cpp",
        "ex15.h",
        "ex16.cpp",
        "ex16.h",
        "ex17.cpp",
        "ex17.h",
        "ex18.cpp",
        "ex18.h",
        "ex19.cpp",
        "ex19.h",
        "ex20.cpp",
        "ex20.h",
        "ex21.cpp",
        "ex21.h",
        "ex22.cpp",
        "ex22.h",
        "ex23.cpp",
        "ex23.h",
        "ex24.cpp",
        "ex24.h",
        "ex25.cpp",
        "ex25.h",
        "ex26.cpp",
        "ex26.h",
        "main.cpp",
    ]

    Group {     // Properties for the produced executable
        fileTagsFilter: "application"
        qbs.install: true
        qbs.installDir: "bin"
    }
}
