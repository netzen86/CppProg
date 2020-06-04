#include <iostream>
#include <math.h>
using namespace std;

float mpd(float x) // functions mpd - "metod polovinnogo deleniya"
{
    return exp(pow(sin(x),2)); // (3*cos(2*x+4))
}

int main()
{
    setlocale(0, "");
    float a,b,e,x; int k=0;
    cout<<"1. y=3*cos(2*x+4)\n";
    cout<<"Левая граница a=";
    cin>>a;
    cout<<"Правая граница b=";
    cin>>b;
    cout<<"Точность e=";
    cin>>e;
    x=(a+b)/2;
    cout<<"Корень уравнения:"<<x;
    //while(fabs(b-a)>e)
    //    {
            if(mpd(a)*mpd(x)<=0) b=x;
            else a=x;
                x=(a+b)/2;
    //            k++;
            cout<<"\nТочность: "<<fabs(b-a)<<" Корень уравнения: "<<x; //" Итерация №="<<k<<
    //    }

    // cout<<"\nКорень уравнения: "<< x << endl; //"\nКоличество итераций ="<<k<<"
    return 0;
}