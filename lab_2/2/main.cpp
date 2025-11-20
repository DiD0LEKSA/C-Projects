#include <iostream>
#include <iomanip>

// Замість зовнішнього файлу визначимо константу тут для зручності
constexpr double GRAVITY_ACCEL = 9.8;

// Функція обчислення поточної висоти
double compute_ball_height(double start_h, int sec)
{
    // Формула шляху: (g * t^2) / 2
    double fell_dist = 0.5 * GRAVITY_ACCEL * (sec * sec);
    double result_h = start_h - fell_dist;

    // Якщо висота від'ємна, повертаємо 0.0
    return (result_h > 0.0) ? result_h : 0.0;
}

// Функція виведення результату
void display_status(double start_h, int t)
{
    double h = compute_ball_height(start_h, t);

    std::cout << "Time: " << t << " sec | Height: ";

    if (h <= 0.0)
    {
        std::cout << "Impact (Ground level)" << std::endl;
    }
    else
    {
        std::cout << std::fixed << std::setprecision(1) << h << " m" << std::endl;
    }
}

int main()
{
    double tower_h;

    std::cout << "Please specify initial tower height (meters): ";
    
    // Перевірка на помилку вводу
    if (!(std::cin >> tower_h))
    {
        std::cerr << "Error: Only numeric values are allowed." << std::endl;
        return -1; // Повертаємо код помилки
    }

    // Основний цикл симуляції (максимум 5 секунд)
    for (int i = 0; i <= 5; ++i)
    {
        display_status(tower_h, i);
        
        // Спрощена умова виходу: якщо ми вже на землі, зупиняємо симуляцію
        if (compute_ball_height(tower_h, i) == 0.0)
        {
            break;
        }
    }

    return 0;
}