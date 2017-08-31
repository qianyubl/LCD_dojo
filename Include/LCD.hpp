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
    static string convertIntergerToString(unsigned int p_num);
    static string getLCDSymbolfromTable(char p_charNum);
    static void printIntergerOnScreen(unsigned int p_num);

private:
    static unsigned int getIndex(char p_charNum);

};
