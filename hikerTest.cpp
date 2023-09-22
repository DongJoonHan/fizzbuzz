#include <gtest/gtest.h>

extern "C"
{
#include "hiker.h"
}

// 14:00 시작

using namespace ::testing;

TEST(Hiker, Life_the_universe_and_everything)
{
    ASSERT_EQ(42, answer());
}

TEST(Calc, testAdd)
{
    ASSERT_EQ(300, sum(100, 200));
}

TEST(FizzBuzz, testFizz)
{
    ASSERT_EQ(300, calcFizzBuzz(3));
    
}

TEST(FizzBuzz, testBuzz)
{
    ASSERT_EQ(500, calcFizzBuzz(5));
}

TEST(FizzBuzz, testFizzBuzz)
{
    ASSERT_EQ(1500, calcFizzBuzz(15));
}

TEST(FizzBuzz, normalNumber)
{
    ASSERT_EQ(1, calcFizzBuzz(1));
    ASSERT_EQ(7, calcFizzBuzz(7));
}

int main(int argc, char* argv[])
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}