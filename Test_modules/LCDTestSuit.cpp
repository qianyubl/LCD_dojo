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


TEST(LCDTestSuit, convertSingleDigit)
{
    //unsigned int l_num = 9;
    //LCD l_lcd(l_num);
    //string l_expectedConvertedSingleDigit = "9";
    //EXPECT_EQ(l_lcd.IntergerToSingleDigit(),l_expectedConvertedSingleDigit);

//    string tmp = "9";
    string l_num = "98";
    vector<string> l_expectedResult = {"._.|_|..|", "._.|_||_|"};
//    string expectedResult1 = "._.|_|..|";

    EXPECT_EQ(LCD::convertDigital2LCDString(l_num[0]),l_expectedResult[0]);
    EXPECT_EQ(LCD::convertDigital2LCDString(l_num[1]),l_expectedResult[1]);

}



