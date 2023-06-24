cmake_minimum_required(VERSION 3.16)
PROJECT (CPP)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(GENERATION_STATE DEBUG)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

if (${GENERATION_STATE} STREQUAL "DEBUG")
message("========================================")
message("================DEBUG===================")
message("========================================")
set(CMAKE_BUILD_TYPE DEBUG)
set(CMAKE_CXX_FLAGS_DEBUG "$ENV{CXXFLAGS} -O0 -Wall -g -glldb")
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
endif()

if (${GENERATION_STATE} STREQUAL "RELEASE")
message("========================================")
message("================RELEASE=================")
message("========================================")
set(CMAKE_BUILD_TYPE RELEASE)
set(CMAKE_CXX_FLAGS_RELEASE "$ENV{CXXFLAGS} -O3 -Wall")
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
endif()


file(GLOB SRC ${CMAKE_CURRENT_SOURCE_DIR}/CPP/05Array/twoArray.cpp)
# file(GLOB SRC ${CMAKE_CURRENT_SOURCE_DIR}/C/02/logical.cpp)


include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_CURRENT_SOURCE_DIR}/../build)
ADD_EXECUTABLE(hello ${SRC})
# target_link_libraries(hello pthread)
# add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/course_code)
