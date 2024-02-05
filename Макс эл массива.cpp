#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
   int a[100];
   int n;
   int g;
   cin>>n;
   for (int i =0 ;i<n;i++) // заполнение массива
   {
       a[i] = rand()%100-50;
       cout<< a[i]<<' ';
   }
   int max = a[0];
   int s = 1;
   for (int i = 1; i < n ; i++)
   {
       if (a[i]>max)
       {
           s = 1;
           max = a[i];
           g = i+1;
       }
       if (max == a[i])
       {
           s+=1;
       }
   }
   for (int i =0 ;i<n;i++) 
   {
       cout<< a[i]<<' ';
   }
   cout<<"Максимальный элемент равен "<<max<<endl;
   cout<<"Кол-во макс " << s << endl;
   cout<<"Номер максимального элемента "<<g;
}