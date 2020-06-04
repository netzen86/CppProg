#include <iostream>
#include <math.h>
using namespace std;
 
 
double f(double x)
{
   return exp(pow(sin(x),2)); // данное уравнение
}

const double PI = 3.14159265; // определяем число ПИ

int main()
{
    double a, b, c, e; // определяем необхоимые переменные
    a = PI/2; // определяем значение левой границы
    cout<< "левый интервал: " << a << endl;
    b = 3*PI/2; // определяем значение правой границы
    cout<< "правый интервал: " <<  b << endl;
    e = 0.05; // определяем точность
    cout<< "точность: " << e << endl;
    while (b - a > e) // условие нахождения корня
    {
        c = (a + b) / 2; // находим середину отрезка
        if(f(a) * f(c) <= 0) // если функция сменила знак
            b = c; // исключен левый подинтервал
        else
            a = c; // исключен правый подинтервал
    }
    cout << "искомый корень равен : " << (a + b) / 2 << endl; // находим искомый корень
    return 0;
}
