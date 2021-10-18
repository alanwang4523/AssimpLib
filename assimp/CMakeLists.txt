
cmake_minimum_required(VERSION 3.4.1)

set(LIBRARY_OUTPUT_PATH ${CMAKE_CURRENT_BINARY_DIR}/libs)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/libs)
set (CMAKE_CXX_STANDARD 11)

#set(ASSIMP_LIB_PATH ${MAIN_PATH}/cpp/third_party/assimp)
set(ASSIMP_LIB_PATH ./)

CONFIGURE_FILE(
        ${ASSIMP_LIB_PATH}/include/assimp/revision.h.in
        ${ASSIMP_LIB_PATH}/include/assimp/revision.h
)

CONFIGURE_FILE(
        ${ASSIMP_LIB_PATH}/include/assimp/config.h.in
        ${ASSIMP_LIB_PATH}/include/assimp/config.h
)

include_directories(${ASSIMP_LIB_PATH}/include)
include_directories(${ASSIMP_LIB_PATH}/code)


file(GLOB_RECURSE CPP_FILES_IN_LIB_ASSIMP             ${ASSIMP_LIB_PATH}/*.cpp)

add_library(
            st_assimp
            STATIC
            ${CPP_FILES_IN_LIB_ASSIMP}
)

target_link_libraries(
                    st_assimp
                    z m
)