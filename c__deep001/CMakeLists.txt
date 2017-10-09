project(c__deep001)

add_executable(c__deep001 main.cpp)
add_library(libCRectangle src/CRectangle.cpp)
target_link_libraries(c__deep001 libCRectangle)
