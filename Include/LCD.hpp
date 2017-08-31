#pragma once

#include <vector>
#include <string>

using namespace std;

class LCD
{
public:
    LCD(unsigned int p_num): m_num(p_num){}
    string IntergerToSingleDigit();
private:
    unsigned int m_num;
};
