project(c__deep17)
add_executable(c__deep017 main.cpp)

add_library(CStudent src/CStudent.cpp)
#add_library(CUndergraduateStudent src/CUndergraduateStudent.cpp src/CStudent.cpp)
add_library(CUndergraduateStudent src/CUndergraduateStudent.cpp )
target_link_libraries(c__deep017 CStudent CUndergraduateStudent)
