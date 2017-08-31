#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include "LCD.hpp"

TEST(LCDTestSuit, convertIntergerToSingleDigit)
{
    unsigned int l_num = 987;
    LCD l_lcd(l_num);
    string l_expectedConvertedSingleDigit = "987";
    EXPECT_EQ(l_lcd.IntergerToSingleDigit(),l_expectedConvertedSingleDigit);
}

