#include <iostream>
#include <math.h>
using namespace std;

float mpd(float x) // functions mpd - "metod polovinnogo deleniya"
{
    return exp(pow(sin(x),2)); // данное уравнение; exp - экспонента (2,718281828); pow - возведение в степень; (3*cos(2*x+4)) 
}

const double PI = 3.14159265; // определяем число ПИ

int main()
{
    setlocale(0, "");
    float a,b,e,x; int k=0;
    cout<<" F(x)=exp(pow(sin(x),2))\n";
    cout<<"Левая граница a=";
    a = PI/2; // определяем значение левой границы
    cout<<"Правая граница b=";
    b = 3*PI/2; // определяем значение правой границы
    cout<<"Точность e=";
    e = 0.05; // определяем точность
    x=(a+b)/2;
    cout<<"Корень уравнения:"<<x;
    while(fabs(b-a)>e)
        {
            if(mpd(a)*mpd(x)<=0) b=x;
            else 
                a=x;
                x=(a+b)/2;
                k++;
            cout<<"\nТочность: "<<fabs(b-a)<<" Итерация №: " << k << "Корень уравнения: "<< x << endl;; 
        }

    cout<<"\nКоличество итераций =" <<k<< " \nКорень уравнения: "<< x << endl; 
    return 0;
}