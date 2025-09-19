#include <iostream>
#include "writeanswer.h"

void writeAnswer(int result)
{
    std::cout << "Результат: " << result << '\n';
    std::cin >> result;
}