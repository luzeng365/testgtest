cmake_minimum_required(VERSION 3.10)

# 设置项目名称
project(TestProject)

# 设置C++标准
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# 添加include目录
include_directories(${PROJECT_SOURCE_DIR}/include)
# 添加源文件
set(SOURCES
    source/test.cpp
)

# 创建可执行文件
add_executable(${PROJECT_NAME} ${SOURCES})

# 设置输出目录
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin) 