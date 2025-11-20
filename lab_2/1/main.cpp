#include <iostream>
#include <limits>

int main() {
    // Оголошуємо змінні з новими іменами
    double val_a, val_b;
    char op;

    // --- Блок введення першого числа ---
    std::cout << "Введіть число A: ";
    // Перевірка на правильність вводу (чи це число)
    while (!(std::cin >> val_a)) {
        std::cout << "Невірний ввід! Спробуйте ще раз: ";
        std::cin.clear(); // Скидаємо прапор помилки
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Чистимо буфер
    }

    // --- Блок введення другого числа ---
    std::cout << "Введіть число B: ";
    while (!(std::cin >> val_b)) {
        std::cout << "Це не число. Введіть коректне значення: ";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    // --- Вибір дії ---
    std::cout << "Оберіть дію (+, -, *, /): ";
    std::cin >> op;

    std::cout << "--------------------------" << std::endl;

    // Виконання операції
    switch (op) {
        case '+':
            std::cout << "Сума: " << val_a << " + " << val_b << " = " << (val_a + val_b) << std::endl;
            break;
            
        case '-':
            std::cout << "Різниця: " << val_a << " - " << val_b << " = " << (val_a - val_b) << std::endl;
            break;
            
        case '*':
            std::cout << "Добуток: " << val_a << " * " << val_b << " = " << (val_a * val_b) << std::endl;
            break;
            
        case '/':
            // Додана перевірка ділення на нуль, якої не було явно в output оригіналу
            if (val_b != 0) {
                std::cout << "Частка: " << val_a << " / " << val_b << " = " << (val_a / val_b) << std::endl;
            } else {
                std::cout << "Помилка: Ділення на нуль неможливе." << std::endl;
            }
            break;
            
        default:
            // Додана реакція на неправильний символ
            std::cout << "Помилка: Невідома операція '" << op << "'" << std::endl;
            break;
    }

    return 0;
}