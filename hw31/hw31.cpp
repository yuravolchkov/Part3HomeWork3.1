#include <iostream>

class Calculator
{
private:
    double num1, num2;

public:
    Calculator(double num1_from_main, double num2_from_main) : num1(num1_from_main), num2(num2_from_main) {}

    double add()
    {
        return num1 + num2;
    }
    double multiply()
    {
        return num1 * num2;
    }
    double subtract_1_2() 
    {
        return num1- num2;
    }
    double subtract_2_1()
    {
        return num2 - num1;
    }
    double divide_1_2()
    {
        return num1 / num2;
    }
    double divide_2_1()
    {
        return num2 / num1;
    }

    bool set_num1(double num1)
    {
        if (num1 == 0)
        {
            std::cout << "Неверный ввод первого числа!\n";
            return 0;
        }
        else
        {
            this->num1 = num1;
            return 1;
        }
    }
    bool set_num2(double num2)
    {
        if (num2 == 0)
        {
            std::cout << "Неверный ввод второго числа!\n";
            return 0;
        }
        else
        {
            this->num2 = num2;
            return 1;
        }
    }
};

int main()
{
    setlocale(LC_ALL, "Russian"); // задать русский текст
    std::system("chcp 1251"); // настроить кодировку консоли
    std::system("cls"); // очистить экран
    double num1_from_main, num2_from_main;
    for (;;) //бесконечный цикл
    {
        std::cout << "Введите num1: ";
        std::cin >> num1_from_main;
        std::cout << "Введите num2: ";
        std::cin >> num2_from_main;
        Calculator counting{ num1_from_main, num2_from_main };
        if (counting.set_num1(num1_from_main) == 1 && counting.set_num2(num2_from_main) == 1)
        {
            std::cout << "num1 + num2 = " << counting.add() << std::endl;
            std::cout << "num1 * num2 = " << counting.multiply() << std::endl;
            std::cout << "num1 - num2 = " << counting.subtract_1_2() << std::endl;
            std::cout << "num2 - num1 = " << counting.subtract_2_1() << std::endl;
            std::cout << "num1 / num2 = " << counting.divide_1_2() << std::endl;
            std::cout << "num2 / num1 = " << counting.divide_2_1() << std::endl;
        }
    }
    return 31;
}