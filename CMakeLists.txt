cmake_minimum_required(VERSION 3.26)
project(untitled1 C)

set(CMAKE_C_STANDARD 11)

add_library(untitled1 library.c
        "Session 2/Ex1.c"
        "Session 2/Ex2.c"
        "Session 4/Ex1.c"
        "Session 4/Ex2.c"
        "Session 4/Ex3.c"
        "Session 4/Ex4.c"
        "Session 4/Ex5.c")
