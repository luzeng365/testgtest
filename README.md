```abc

```

# testgtest

a demo for gtest

#### **编译**

```
cd build
rm -rf *
cmake -G "MinGW Makefiles" ..
mingw32-make.exe all
```

#### 编译gtest

按照gtest的的README.md编译，需要注意的是在cmake的时候需要指定安装的路径，否则make install时会出错

`cmake -G "MinGW Makefiles" -DCMAKE_INSTALL_PREFIX=d:/googletest ..`

目前本机使用的是gcc 4.8.2的版本，编译gtest的时候使用v1.8.x版本，否则可能会存在版本不匹配错误

#### 执行

1.运行build.bat

2.生成的文件，正常的可执行文件在/bin/TestProject.exe目录，用例的目录在/bin/test_add_test.exe
