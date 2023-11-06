#include <iostream>
#include <string>
#include "atoi.hpp"
#include "itoa.hpp"


int main()
{
    int num = 550;
    std::string str_num = itoa(num);
    std::cout << typeid(str_num).name() << std::endl;

    const char* str = "1223";
    int num2 = atoi(str);
    std::cout << typeid(num2).name() << std::endl; 

    return 0;
}