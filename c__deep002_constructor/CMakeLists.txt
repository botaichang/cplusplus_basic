project(c__deep002_constructor)

add_executable(c__deep002_constructor main.cpp)
add_library(libComplex src/Complex.cpp)

target_link_libraries(c__deep002_constructor libComplex)

install(TARGETS c__deep002_constructor RUNTIME DESTINATION bin)
