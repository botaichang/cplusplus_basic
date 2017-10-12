project(c__deep012_operator)
add_executable(c__deep012_operator main.cpp)
add_library(String src/String.cpp)
target_link_libraries(c__deep012_operator String)
