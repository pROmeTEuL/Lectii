cmake_minimum_required(VERSION 3.0)

project(Lectii LANGUAGES CXX)

set(SRCS ex01.cpp  ex03.cpp  ex05.cpp  ex07.cpp  ex09.cpp  ex11.cpp
        ex13.cpp  ex15.cpp  ex17.cpp  ex19.cpp  main.cpp
        ex02.cpp  ex04.cpp  ex06.cpp  ex08.cpp  ex10.cpp  ex12.cpp
        ex14.cpp  ex16.cpp  ex18.cpp  ex20.cpp ex21.cpp ex22.cpp ex23.cpp)

add_executable(SRCS ex01.cpp  ex03.cpp  ex05.cpp  ex07.cpp  ex09.cpp  ex11.cpp
        ex13.cpp  ex15.cpp  ex17.cpp  ex19.cpp  main.cpp
        ex02.cpp  ex04.cpp  ex06.cpp  ex08.cpp  ex10.cpp  ex12.cpp
        ex14.cpp  ex16.cpp  ex18.cpp  ex20.cpp ex21.cpp "ex22.cpp" "ex23.cpp" "ex24.cpp")

