project(carray)
add_executable(carray main.cpp)
add_library(CArray src/CArray.cpp)
target_link_libraries(carray CArray)
