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


TEST(LCDTestSuit, printOnScreenForSingalNumber)
{
    int l_num = 7;
    LCD::printIntergerOnScreen(l_num);
}

TEST(LCDTestSuit, printOnScreenForNumbers)
{
    int l_num = 697;
    LCD::printIntergerOnScreen(l_num);
}


TEST(LCDTestSuit, inputNumMoreThan3Digit)
{
    int l_num = 2345;
    EXPECT_THROW(LCD::printIntergerOnScreen(l_num),invalid_argument);
}

TEST(LCDTestSuit, inputNegtiveNum)
{
    int l_num = -42;
    cout << l_num;
    EXPECT_THROW(LCD::printIntergerOnScreen(l_num),invalid_argument);
}

TEST(LCDTestSuit, getIntergerFromScreenString)
{
    string l_str = "._...|..|";
    int l_expectNum = 7;
    EXPECT_EQ(LCD::getIntergerFromScreenString(l_str),l_expectNum);
}


