cmake_minimum_required(VERSION 2.8)

project(c__basic002)

add_executable(c__basic002 main.cpp)

add_library(libCRectangle  
     src/CRectangle.cpp
     )

target_link_libraries(c__basic002 libCRectangle)

