#pragma once

#include <vector>
#include <string>

using namespace std;

extern vector<string> g_LCD_Table;

class LCD
{
public:
    LCD(unsigned int p_num): m_num(p_num){}
    string IntergerToSingleDigit();
    static string convertDigital2LCDString(char p_charNum);
private:
    unsigned int m_num;
};
