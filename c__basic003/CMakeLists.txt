cmake_minimum_required(VERSION 2.8)

project(c__basic003)

add_executable(c__basic003 main.cpp)

add_library(libCRectangle  
     src/CRectangle.cpp
     )

target_link_libraries(c__basic003 libCRectangle)

