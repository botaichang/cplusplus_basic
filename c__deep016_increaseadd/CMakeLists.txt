project(c__deep016)
add_executable(c__deep016 main.cpp)

add_library(CDemo src/CDemo.cpp)

target_link_libraries(c__deep016 CDemo)
