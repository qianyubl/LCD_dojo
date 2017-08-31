#include "LCD.hpp"

vector<string> g_LCD_Table = {"._.|.||_|",
                                     ".....|..|",
                                     "._.._||_.",
                                     "._.._|._|",
                                     "...|_|..|",
                                     "._.|_.._|",
                                     "._.|_.|_|",
                                     "._...|..|",
                                     "._.|_||_|",
                                     "._.|_|..|"};


string LCD::IntergerToSingleDigit()
{
    return to_string(m_num);
}

string LCD::convertDigital2LCDString(char p_charNum)
{

    return g_LCD_Table[p_charNum-'0'];
}

