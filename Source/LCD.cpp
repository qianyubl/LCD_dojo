#include "LCD.hpp"
#include <stdexcept>

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

unsigned int LCD::getIndex(char p_charNum)
{
    if(p_charNum > '9' && p_charNum < '0')
    {
        throw invalid_argument("invalid input number");
    }
    return (p_charNum-'0');
}

string LCD::getLCDSymbolfromTable(char p_charNum)
{
    return g_LCD_Table[getIndex(p_charNum)];
}

void LCD::printIntergerOnScreen(int p_num)
{
   string l_str = to_string(p_num);
   string line1, line2, line3;
   for(auto c : l_str)
   {
        string l_p = getLCDSymbolfromTable(c);
        line1 = l_p.substr(0,3);
        line2 = l_p.substr(3,3);
        line3 = l_p.substr(6,3);
   }
   cout<<line1<<endl<<line2<<endl<<line3<<endl;

}


