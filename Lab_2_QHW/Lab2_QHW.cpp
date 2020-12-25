#include <cmath>
#include <iostream>
#include <utility>
#include <string>
#include <cassert>

using namespace std;

pair<double, double> equation(double a, double b, double c = 0)
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

/*
Тест_1: На вход подаются три вещественных аргумента.
Проверяется интерфейсная связь между решателем уравнений и нахождением НОДа.
*/
void integration_test_1(double a, double b, double c)
{

    auto equation_result = equation(a, b, c);
    auto nod_result = NOD(equation_result.first, equation_result.second);
}

/*
Тест_2: На вход подаются два целочисленных значения.
Проверяется обратная интерфейсная связь.
*/
void integration_test_2(int a, int b)
{
    auto nod_result = NOD(a, b);
    auto equation_result = equation(nod_result, b);
}