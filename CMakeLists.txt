cmake_minimum_required(VERSION 3.16)
PROJECT (HELLO)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(GENERATION_STATE DEBUG)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

if (${GENERATION_STATE} STREQUAL "DEBUG")
message("========================================")
message("================DEBUG===================")
message("========================================")
set(CMAKE_BUILD_TYPE DEBUG)
# set(CMAKE_CXX_FLAGS_DEBUG "$ENV{CXXFLAGS} -O0 -Wall -g -glldb")
# message("$ENV{CXXFLAGS} -O0 -Wall -g -ggdb")
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

# # protobuf
# find_package(Protobuf REQUIRED)
# find_program(PROTOC protoc)
# if (NOT PROTOC MATCHES "NOTFOUND" AND Protobuf_FOUND)
#     message("======================================================")
#     message("-- Protobuf Found, Protobuf Support is turned On!")
#     message("======================================================")
#     add_definitions(-DPROTO_FOUND)
#     include_directories(${PROTOBUF_INCLUDE_DIRS})
#     # my proto
#     SET(PROTO_CPP_PATH ${PROJECT_SOURCE_DIR}/src/proto)
#     string(APPEND PROTO_FILE_PATH ${PROTO_CPP_PATH} "/protofile")
#     file(GLOB PROTOBUF_FILELIST ${PROTO_FILE_PATH}/*.proto)
#     message("proto file in ${PROTO_CPP_PATH}/ :")
#     foreach(proto_file ${PROTO_FILE_PATH})
#         string(REPLACE ${PROTO_FILE_PATH}/ "" proto_file_ ${proto_file})
#         message(STATUS "COMPILING")
        
#     endforeach(proto_file ${PROTO_FILE_PATH})

    

# SET(SRC_LIST src/sem.cpp)
SET(SRC_LIST DSSAD/treeNonRecursivePost.cpp)
# include_directories(/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/clang++)
#目前暂时先了解SET指令用来显式定义变量
MESSAGE(STATUS "This is Binary dir" ${HELLO_BINARY_DIR})
MESSAGE(STATUS "This is SOURCE dir" ${HELLO_SOURCE_DIR})
# MESSAGE用法
# MESSAGR([SEND_ERROR | STATUS | FATAL_ERROR] "message to display")
# SEND_ERROR : 产生错误,生成过程被跳过
# STATUS: 输出前缀为-的信息
# FATAL_ERROR: 立即终止所有cmake过程
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)
# ADD_EXECUTABLE(hello ${SRC_LIST})
# target_link_libraries(hello pthread)
add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/course_code)
