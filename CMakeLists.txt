cmake_minimum_required(VERSION 3.3)
project(movetofrontlist)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -std=c99")

set(SOURCE_FILES main.c dlist.c)
add_executable(movetofrontlist ${SOURCE_FILES})