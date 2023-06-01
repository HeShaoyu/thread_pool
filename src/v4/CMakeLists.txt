cmake_minimum_required(VERSION 3.15)
project(test)
# set(SRC add.cpp div.cpp mult.cpp main.cpp sub.cpp)
# aux_source_directory(${PROJECT_SOURCE_DIR}/src SRC)
file(GLOB SRC ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)
# set(EXECUTABLE_OUTPUT_PATH ${CMAKE_CURRENT_SOURCE_DIR})
set(CMAKE_CXX_STANDARD 11)
# add_executable(app main.cpp ${SRC})
# set(LIBRARY_OUTPUT_PATH ${CMAKE_CURRENT_SOURCE_DIR}/release)
# add_library(calc SHARED ${SRC})

# link_libraries(calc)
message("xxxxxxxxxxxxxxxx")
link_directories(${CMAKE_CURRENT_SOURCE_DIR}/lib2)



add_executable(app ${SRC})

message(STATUS "111xxxxxxxxxxxxxxxx")
# message(FATAL_ERROR "222xxxxxxxxxxxxxxxx")
message(STATUS "333xxxxxxxxxxxxxxxx")
target_link_libraries(app calc)
