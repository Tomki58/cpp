#include <cmath>
#include <iostream>
#include <utility>
#include <string>
#include <cassert>

using namespace std;

pair<double, double> equation(double a, double b, double c)
{

    if (a == 0 && b != 0)
    {
        return {-c / b, 0};
    }

    double D = pow(b, 2) - 4 * a * c;
    double x1, x2;
    if (D == 0 && b != 0)
    {
        x1 = (-b) / (2 * a);
        return {x1, x1};
    }
    if (D > 0)
    {
        x1 = (-b + sqrt(D)) / (2 * a);
        x2 = (-b - sqrt(D)) / (2 * a);
        return {x1, x2};
    }
    return {};
}

string minString(string first_string, string second_string, string third_string)
{
    string min_string = first_string;
    if (second_string < min_string)
    {
        min_string = second_string;
    }
    if (third_string < min_string)
    {
        min_string = third_string;
    }
    return min_string;
}

int NOD(int a, int b)
{

    while (a > 0 && b > 0)
    {
        if (a > b)
        {
            a %= b;
        }
        else
        {
            b %= a;
        }
    }

    return a + b;
}

void testFunction1(void)
{
    pair<double, double> result = {};

    // Все коэффициенты уравнения нули
    assert(equation(0, 0, 0) == result);

    // с == 0
    result = {3, 0};
    assert(equation(4, -12, 0) == result);

    // b == 0
    result = {};
    assert(equation(4, 0, 20) == result);

    // a == 0
    result = {-2, 0};
    assert(equation(0, 10, 20) == result);

    // Общий набор коэффициентов уравнения
    result = {1, -4./9};
    assert(equation(9, -5, -4) == result);

    // Дискриминант равный нулю
    result = {-2.5, -2.5};
    assert(equation(4, 20, 25) == result);

    // Отрицательный дискриминант
    result = {};
    assert(equation(2, 4, 7) == result);
}

void testFunction2(void)
{
    // Однобуквенные строки разной длины
    assert(minString("aaaaa", "aaa", "aaaaaaa") == "aaa");

    // Строки не только с буквами
    assert(minString("123543gfdsgdfs43", "gfsdgsfdi3u25", "asfsda") == "123543gfdsgdfs43");

    // Общий вид строк
    assert(minString("hello", "Hello", "Hell") == "Hell");
}

void testFunction3(void)
{
    // Оба числа нули
    assert(NOD(0, 0) == 0);

    // Оба числа равны
    assert(NOD(32, 32) == 32);

    // Взаимно простые числа
    assert(NOD(54, 55) == 1);

    // Общий случай
    assert(NOD(55, 125) == 5);
}

int main()
{
    testFunction1();
    testFunction2();
    testFunction3();
    
    return 0;
}