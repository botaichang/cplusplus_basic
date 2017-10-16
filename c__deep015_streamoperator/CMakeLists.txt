project(c__deep015)

add_executable(c__deep015 main.cpp)

add_library(Complex src/Complex.cpp)

target_link_libraries(c__deep015 Complex )

