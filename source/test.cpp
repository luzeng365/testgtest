#include "test.h"
using namespace std;
int TestGtestFunc::test_add(int a, int b)
{
    return a + b;
}

int TestGtestFunc::test_subtract(int a, int b)
{
    return a - b;
}

int TestGtestFunc::test_multiply(int a, int b)
{
    return a * b;
}

double TestGtestFunc::test_divide(int a, int b)
{
    if (b == 0) {
        return 0;
    }
    return static_cast<double>(a) / b;
}