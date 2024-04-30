// hw31.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>


class Calculator
{
private:
    double num1=1, num2=1;

public:
    double getter_num1()
    {
        return num1;
    }

    void setter_num1(double num1)
    {
        this ->num1 = num1;
    }

    double getter_num2()
    {
        return num2;
    }

    void setter_num2(double num2)
    {
        this->num2 = num2;
    }

    double add();
    double multiply();
    double subtract_1_2();
    double subtract_2_1();
    double divide_1_2();
    double divide_2_1();
    bool set_num1(double num1);
    bool set_num2(double num2);
};

double Calculator::add()
{
return getter_num1() + getter_num2();
}

double Calculator::multiply()
{
    return getter_num1() * getter_num2();
}

double Calculator::subtract_1_2()
{
    return getter_num1() - getter_num2();
}

double Calculator::subtract_2_1()
{
    return getter_num2() - getter_num1();
}

double Calculator::divide_1_2()
{
    return getter_num1() / getter_num2();
}

double Calculator::divide_2_1()
{
    return getter_num2() / getter_num1();
}

bool Calculator::set_num1(double num1)
{
    if (num1 == 0)
    {
        return false;
    }
    setter_num1(num1);
    return true;
}

bool Calculator::set_num2(double num2)
{
    if (num2 == 0)
    {
        return false;
    }
    setter_num2(num2);
    return true;
}

int main()
{
    setlocale(LC_ALL, "Russian"); // задать русский текст
    std::system("chcp 1251"); // настроить кодировку консоли
    std::system("cls"); // очистить экран

    Calculator counting;
    double num1, num2;

    for (;;) //бесконечный цикл
    {
        for (bool i = 0; i != 1;) //ввод первого числа с проверкой "ненулевого значения"
        {
            std::cout << "Введите num1: ";
            std::cin >> num1;
            i = counting.set_num1(num1);
            if (i == 0)
            {
                std::cout << "Неверный ввод! \n";
            }
        }
        for (bool i = 0; i != 1;) //ввод второго числа с проверкой "ненулевого значения"
        {
            std::cout << "Введите num2: ";
            std::cin >> num2;
            i = counting.set_num2(num2);
            if (i == 0)
            {
                std::cout << "Неверный ввод! \n";
            }
        }

        std::cout << "num1 + num2 = " << counting.add() << std::endl;
        std::cout << "num1 * num2 = " << counting.multiply() << std::endl;
        std::cout << "num1 - num2 = " << counting.subtract_1_2() << std::endl;
        std::cout << "num2 - num1 = " << counting.subtract_2_1() << std::endl;
        std::cout << "num1 / num2 = " << counting.divide_1_2() << std::endl;
        std::cout << "num2 / num1 = " << counting.divide_2_1() << std::endl;
    }
    return 1;
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
