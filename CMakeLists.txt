cmake_minimum_required(VERSION 3.24)
project(Lab4 C)

set(CMAKE_C_STANDARD 11)

add_executable(Lab4 main.c)

#find_package(funcs.c)
#target_link_libraries(funcs.c)

add_library(pfuncs funcs.c)
