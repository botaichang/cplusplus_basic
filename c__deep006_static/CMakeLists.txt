project(c__deep006_static)

add_executable(c__deep006_static main.cpp)
add_library(libRectangle src/CRectangle.cpp)

target_link_libraries(c__deep006_static libRectangle)


