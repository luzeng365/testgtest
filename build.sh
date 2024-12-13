#!/bin/bash

# 删除旧的 build 目录（如果存在）
rm -rf build/

# 创建一个新的 build 目录
mkdir build

# 进入 build 目录
cd build/

# 运行 CMake 配置项目
cmake ..

# 编译项目
make

# 执行测试程序
./../bin/test_add_test

# 生成覆盖率数据，忽略 mismatch 警告
lcov --capture --directory . --output-file coverage.info --ignore-errors mismatch

# 使用 genhtml 生成 HTML 覆盖率报告
genhtml -o report coverage.info

# 打印完成消息
echo "覆盖率报告已生成在 'report' 目录中"
