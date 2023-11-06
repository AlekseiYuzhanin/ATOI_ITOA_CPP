#include <iostream>
#include <string>
#include "atoi.h"

int main()
{
    const char* str = "12345";
    int num = atoi(str);
    std::cout << num + 10 << std::endl;
}