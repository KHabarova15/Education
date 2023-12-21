#include <cmath>
#include <iostream>
using namespace std;

const double epsilon = pow(10, -6);

double f(double x) {
return 3*x - 4 * log(x) - 5;
}
double u(double x) {
return (5+4*log(x)) / 3;
}
double u1 (double x) {
return 4/(3*x);
}

int main() {
setlocale(LC_ALL, "Rus");
double a=2,b=4, x;
x = (a+b) / 2;
if (abs(u1(x)) < 1) {
while (abs(f(x)) > epsilon){
x = u(x);
}
cout<<"Корень x = "<<x<<endl;
} else {
cout <<"Условие сходимости не выполнено"<<endl;
}
return 0;
}