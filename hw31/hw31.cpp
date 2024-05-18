// hw31.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>


class Calculator
{
private:
    double num1=1, num2=1;

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
};

int main()
{
    setlocale(LC_ALL, "Russian"); // задать русский текст
    std::system("chcp 1251"); // настроить кодировку консоли
    std::system("cls"); // очистить экран
    double num1_from_main, num2_from_main;
    for (;;) //бесконечный цикл
    {
        for (bool i = 0; i != 1;) //ввод первого числа с проверкой "ненулевого значения"
        {
            std::cout << "Введите num1: ";
            std::cin >> num1_from_main;
            if (num1_from_main == 0)
            {
             std::cout << "Неверный ввод! \n";
            }
            else {
                i = 1;
            }

        }
        for (bool i = 0; i != 1;) //ввод второго числа с проверкой "ненулевого значения"
        {
            std::cout << "Введите num2: ";
            std::cin >> num2_from_main;
            if (num2_from_main == 0)
            {
                std::cout << "Неверный ввод! \n";
            }
            else {
                i = 1;
            }
        }
        Calculator counting{num1_from_main, num2_from_main};
        
        std::cout << "num1 + num2 = " << counting.add() << std::endl;
        std::cout << "num1 * num2 = " << counting.multiply() << std::endl;
        std::cout << "num1 - num2 = " << counting.subtract_1_2() << std::endl;
        std::cout << "num2 - num1 = " << counting.subtract_2_1() << std::endl;
        std::cout << "num1 / num2 = " << counting.divide_1_2() << std::endl;
        std::cout << "num2 / num1 = " << counting.divide_2_1() << std::endl;
    }
    return 31;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
