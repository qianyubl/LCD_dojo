#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include "LCD.hpp"
#include <stdexcept>

TEST(LCDTestSuit, convertSingleDigitToLCDString)
{
    string l_num = "98";
    vector<string> l_expectedResult = {"._.|_|..|", "._.|_||_|"};

    EXPECT_EQ(LCD::getLCDSymbolfromTable(l_num[0]),l_expectedResult[0]);
    EXPECT_EQ(LCD::getLCDSymbolfromTable(l_num[1]),l_expectedResult[1]);
}


TEST(LCDTestSuit, printOnScreen)
{
    int l_num = 7;
    LCD::printIntergerOnScreen(l_num);
}

