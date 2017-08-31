#include "LCD.hpp"
#include <stdexcept>
#include <algorithm>


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
   if(p_num > 999 || p_num < 0)
        throw invalid_argument("input number more 3 digit");
   string l_str = to_string(p_num);
   string line1, line2, line3;
   for(auto c : l_str)
   {
        string l_p = getLCDSymbolfromTable(c);
        line1 += l_p.substr(0,3) + " ";
        line2 += l_p.substr(3,3) + " ";
        line3 += l_p.substr(6,3) + " ";
   }
   cout<<line1<<endl<<line2<<endl<<line3<<endl;

}

int LCD::getIntergerFromScreenString(string p_str)
{
    if (27 < p_str.size() or 0 != p_str.size()%9)
    {
        throw invalid_argument("input string is invalid");
    }

    int result = 0;
    for(int i = 0;  i< p_str.size()/9; i++)
    {
        auto l_iter = find(begin(g_LCD_Table), end(g_LCD_Table), p_str.substr(i*9, 9));
        if (g_LCD_Table.end() == l_iter)
        {
            throw invalid_argument("input string is invalid");
        }
        result = result*10 +(l_iter - g_LCD_Table.begin());
    }
    return result;
}


