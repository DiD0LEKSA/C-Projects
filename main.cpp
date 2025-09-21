#include <windows.h>

//Завдання 1
/*
#include <iostream>

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
}

int main()
{
    int x{ readNumber() };
    int y{ readNumber() };
    int sum{ x + y };

    writeAnswer(sum);

    return 0;
}
*/
//Завдання 2
/*
#include <iostream>
#include "readnumber.h"
#include "writeanswer.h"

int main()
{
    SetConsoleCP(65001);   // ввід UTF-8
    SetConsoleOutputCP(65001); // вивід UTF-8
    int x{ readNumber() };
    int y{ readNumber() };
    int sum{ x + y };

    writeAnswer(sum);

    return 0;
}
*/

//Завдання 3

#include <iostream>
#include "io.h"

int main()
{
    SetConsoleCP(65001);   // ввід UTF-8
    SetConsoleOutputCP(65001); // вивід UTF-8
    int x{ readNumber() };
    int y{ readNumber() };
    int sum{ x + y };

    writeAnswer(sum);

    return 0;
}