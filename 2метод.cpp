#include <iostream> 
#include <math.h>
using namespace std;
const double epsilon = 0.00001;
double f(double x)
{
    return 3*x - 4*log(x) - 5;// 3x - 4lnx - 5 = 0
}
double f1(double x)
{
    return 3 - 4/x; // 1 производная
}
double f2(double x)
{
    return 4/pow(x,2);
}
int main()
{setlocale(LC_ALL,"Russian");
    double a,b,x;
    a=2;b=4;
    int k;
    if(f(a)*f2(a)>0)
    {
        cout<<"Условие сходимости выполнено для х = а = "<<a<<endl;
        x = a;
    }
    else
    {
       if(f(b)*f2(b)>0)
       {
           cout<<"Условие сходимости выполнено для х = b = "<<b<<endl;
           x = b;
           
       }
       else
       {
           cout<<"Условие сходимости не выполнено";
           x = -10E10;
       }
    }
    if (x>-10E10)
    {
        k=0;
        while(1)
        {
            x = x - f(x)/f1(x);
            k+=1;
            if(fabs(f(x))<epsilon) break;
        }
        cout<<"Корень х = "<<x<<endl;
        cout<<"Кол-во итераций: "<<k<<endl;
    }
    return 0;
}