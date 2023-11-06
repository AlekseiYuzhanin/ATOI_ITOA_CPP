#include <string>
#include "itoa.hpp"

std::string itoa(int num)
{
    std::string result = "";

    if(num < 0)
    {
        result += '-';
        num = -num;
    }

    if(num == 0)
    {
        result+= '0';
    }
    else
    {
        while(num > 0)
        {
            result = static_cast<char>('0' + num % 10) + result;
            num /= 10;
        }
    }

    return result;
}