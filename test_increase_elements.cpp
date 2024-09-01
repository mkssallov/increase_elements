#include <gtest/gtest.h>
#include <vector>

extern std::vector<int> increaseElements(std::vector<int>& vec, int n);

TEST(IncreaseElementsTest, BasicAssertions) {
    std::vector<int> vec = {1, 2, 3};
    int n = 5;
    std::vector<int> expected = {6, 7, 8};
    
    EXPECT_EQ(increaseElements(vec, n), expected);
}

TEST(IncreaseElementsTest, EmptyVector) {
    std::vector<int> vec = {};
    int n = 5;
    std::vector<int> expected = {};
    
    EXPECT_EQ(increaseElements(vec, n), expected);
}

TEST(IncreaseElementsTest, NegativeNumbers) {
    std::vector<int> vec = {-1, -2, -3};
    int n = 2;
    std::vector<int> expected = {1, 0, -1};
    
    EXPECT_EQ(increaseElements(vec, n), expected);
}