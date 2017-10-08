project(c__deep011_operator)
add_executable(c__deep011_operator main.cpp)
add_library(Complex src/Complex.cpp)
target_link_libraries(c__deep011_operator Complex)