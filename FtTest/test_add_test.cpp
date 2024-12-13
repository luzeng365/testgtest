#include "gtest/gtest.h"
#include "test.h"

class TestAddTest : public testing::Test {
protected:
    TestGtestFunc test_func;
};

TEST_F(TestAddTest, AddPositiveNumbers) {
    EXPECT_EQ(test_func.test_add(1, 2), 3);
    EXPECT_EQ(test_func.test_add(100, 200), 300);
}

TEST_F(TestAddTest, AddNegativeNumbers) {
    EXPECT_EQ(test_func.test_add(-1, -2), -3);
    EXPECT_EQ(test_func.test_add(-10, -20), -30);
}

class TestSubtractTest : public testing::Test {
protected:
    TestGtestFunc test_func;
};

TEST_F(TestSubtractTest, SubtractPositiveNumbers) {
    EXPECT_EQ(test_func.test_subtract(5, 3), 2);
    EXPECT_EQ(test_func.test_subtract(200, 100), 100);
}

TEST_F(TestSubtractTest, SubtractNegativeNumbers) {
    EXPECT_EQ(test_func.test_subtract(-1, -2), 1);
    EXPECT_EQ(test_func.test_subtract(-10, -20), 10);
}

class TestMultiplyTest : public testing::Test {
protected:
    TestGtestFunc test_func;
};

TEST_F(TestMultiplyTest, MultiplyPositiveNumbers) {
    EXPECT_EQ(test_func.test_multiply(2, 3), 6);
    EXPECT_EQ(test_func.test_multiply(100, 200), 20000);
}

TEST_F(TestMultiplyTest, MultiplyNegativeNumbers) {
    EXPECT_EQ(test_func.test_multiply(-2, -3), 6);
    EXPECT_EQ(test_func.test_multiply(-10, -20), 200);
}

class TestDivideTest : public testing::Test {
protected:
    TestGtestFunc test_func;
};

TEST_F(TestDivideTest, DividePositiveNumbers) {
    EXPECT_EQ(test_func.test_divide(6, 3), 2);
    EXPECT_EQ(test_func.test_divide(200, 100), 2);
}

TEST_F(TestDivideTest, DivideNegativeNumbers) {
    EXPECT_EQ(test_func.test_divide(-6, -3), 2);
    EXPECT_EQ(test_func.test_divide(-200, -100), 2);
}

TEST_F(TestDivideTest, DivideByZero) {
    EXPECT_EQ(test_func.test_divide(10, 1), 10);
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}