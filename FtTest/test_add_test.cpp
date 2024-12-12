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

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
} 