#include <iostream>
#include <Windows.h>

#include "Complex.h"

int main()
{
    Complex c(1.2,3.4);
    c.Display();    				//格式化显示复数
    std::cout << "duqi" << std::endl;
    system("pause");
    return 0;
}
