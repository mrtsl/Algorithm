cmake_minimum_required(VERSION 2.8.12)

project(Algorithm)

include_directories(
    include
)

aux_source_directory(./src DIR_SRCS)

add_subdirectory(src)

# 指定生成目标
ADD_EXECUTABLE(xxx ${DIR_SRCS})

target_link_libraries (xxx SqList BASE)

#add_executable(demo demo.cpp) # 生成可执行文件
# add_library(common STATIC .cpp) # 生成静态库
# add_library(common SHARED .cpp) # 生成动态库或共享库
