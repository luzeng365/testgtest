@echo off
rem 检查是否存在 build 目录
if exist build (
    rem 如果存在 build 目录，则进入并删除其中的所有文件
    cd build
    rem 删除所有文件和子目录
    rmdir /s /q .
    cd ..
)

rem 删除 bin 目录
rmdir /s /q bin

rem 创建并进入 build 目录
mkdir build
cd build

rem 执行 CMake 配置
cmake -G "MinGW Makefiles" ..

rem 使用 mingw32-make 编译项目
mingw32-make.exe all

rem 返回到原始目录
cd ..
