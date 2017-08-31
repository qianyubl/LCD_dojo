#pragma once

#include <vector>
#include <string>
#include <iostream>

using namespace std;

extern vector<string> g_LCD_Table;

class LCD
{
public:
    LCD(){}
    static string getLCDSymbolfromTable(char p_charNum);
    static void printIntergerOnScreen(int p_num);

private:
    static unsigned int getIndex(char p_charNum);

};
