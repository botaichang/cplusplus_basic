project(c__deep007_closedclass)

add_executable(c__deep007_closedclass main.cpp)
add_library(
CWeights src/CWeights.cpp
)
add_library(
CLayers  src/CLayers.cpp 
         src/CWeights.cpp
)

target_link_libraries(
c__deep007_closedclass 
CWeights
CLayers
)
