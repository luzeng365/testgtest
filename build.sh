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
COVERAGE_FILE=coverage.info
REPORT_FOLDER=coverage_report
lcov --rc lcov_branch_coverage=1 -c -d . -o ${COVERAGE_FILE}_tmp --ignore-errors mismatch
lcov --rc lcov_branch_coverage=1  -e ${COVERAGE_FILE}_tmp "*source*" -o ${COVERAGE_FILE}
genhtml --rc genhtml_branch_coverage=1 ${COVERAGE_FILE} -o ${REPORT_FOLDER}

# 使用 genhtml 生成 HTML 覆盖率报告
genhtml -o report coverage.info

# 打印完成消息
echo "覆盖率报告已生成在 'report' 目录中"
