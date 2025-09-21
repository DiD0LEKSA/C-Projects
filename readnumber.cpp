#include <iostream>
#include "readnumber.h"

int readNumber()
{
    int number{};
    std::cout << "Введіть ціле число: ";
    std::cin >> number;
    return number;
}