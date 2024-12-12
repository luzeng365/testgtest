cmake_minimum_required(VERSION 3.10)

# 设置项目名称
project(TestProject)

# 设置C++标准
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# 设置 Google Test 的路径
set(GTEST_INCLUDE_DIR ${PROJECT_SOURCE_DIR}/googletest/include)
set(GTEST_LIB ${PROJECT_SOURCE_DIR}/googletest/lib/libgtest.a)
set(GTEST_MAIN_LIB ${PROJECT_SOURCE_DIR}/googletest/lib/libgtest_main.a)

# 添加include目录
include_directories(${PROJECT_SOURCE_DIR}/include)
include_directories(${GTEST_INCLUDE_DIR})

# 添加源文件
add_executable(${PROJECT_NAME} 
    source/main.cpp
    source/test.cpp
)

# 创建测试可执行文件
add_executable(test_add_test 
    FtTest/test_add_test.cpp 
    source/test.cpp
)

# 链接 Google Test 库
target_link_libraries(test_add_test ${GTEST_LIB} ${GTEST_MAIN_LIB} pthread)

# 设置输出目录
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)