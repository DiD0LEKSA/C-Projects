#include <iostream>
#include "io.h"

int readNumber()
{
    int number{};
    std::cout << "Введіть ціле число: ";
    std::cin >> number;
    return number;
}

void writeAnswer(int result)
{
    std::cout << "Результат: " << result << '\n';
    std::cin >> result;
}