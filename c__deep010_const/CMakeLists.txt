project(c__deep010_const)
add_executable(c__deep010_const main.cpp )
add_library(Sample src/Sample.cpp)
target_link_libraries(c__deep010_const Sample)
