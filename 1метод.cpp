#include <iostream> 
#include <math.h>
using namespace std;
const double epsilon = 0.0001;
double f(double x)
{
    return 3*x - 4*log(x) - 5;// 3x - 4lnx - 5 = 0
}
int main()
{
    double a,b,с;
    a=2;b=4;
    while((b-a) > epsilon)
    {
        с=(a+b)/2;
        if (f(b)*f(с)<0)
            a=с;
        else
            b=с;
    }
        cout<<(a+b)/2<<endl;
        return 0;
}