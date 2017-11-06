project(c__deep022_duotai)
add_executable(c__deep022_duotai main.cpp)
add_library(duotai src/duotai.cpp)
target_link_libraries(c__deep022_duotai duotai)
