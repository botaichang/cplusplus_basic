project(c__deep008_friend)

add_executable(c__deep008_friend main.cpp)
add_library(
CWeights src/CWeights.cpp
)
add_library(
CLayers  src/CLayers.cpp 
         src/CWeights.cpp
)

target_link_libraries(
c__deep008_friend
CWeights
CLayers
)
