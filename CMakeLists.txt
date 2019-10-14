cmake_minimum_required(VERSION 2.8.12)

project(Algorithm)

include_directories(
    include
)
add_subdirectory(src)

aux_source_directory({CMAKE_CURRENT_SOURCE_DIR}/src DIR_SRCS)

# 指定生成目标
add_executable(Algorithm ${DIR_SRCS})

target_link_libraries (Algorithm pthread)

add_executable(demo demo.cpp) # 生成可执行文件
# add_library(common STATIC .cpp) # 生成静态库
# add_library(common SHARED .cpp) # 生成动态库或共享库