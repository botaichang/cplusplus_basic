cmake_minimum_required(VERSION 2.8)
project(1_pointer)

add_executable(1_pointer 1_pointer_main.cpp)

install(TARGETS 1_pointer RUNTIME DESTINATION bin)
