cmake_minimum_required(VERSION 3.20)
project(LeetCode LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 17)

# 只要再往 src 里扔 xxx.cpp，就会自动生成同名可执行文件
file(GLOB SRCS src/*.cpp)
foreach(f ${SRCS})
    get_filename_component(name ${f} NAME_WE)   # 去掉扩展名
    add_executable(${name} ${f})
endforeach()