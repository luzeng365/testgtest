#include "test.h"

int main()
{
    std::cout << "Hello World:";
    TestGtestFunc test_func;
    int result = test_func.test_add(1, 2);
    std::cout << result;
    system("pause");
    return 0;
}