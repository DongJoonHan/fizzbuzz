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

int main(int argc, char* argv[])
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}