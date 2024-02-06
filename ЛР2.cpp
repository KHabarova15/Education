#include <iostream>
#include <stdlib.h>
#include <clocale>
using namespace std;
int main()
{
   int m[100];
   const int n = 10;
   int i = 0;
   bool f = true;
   for (int i =0 ;i<n;i++) // заполнение массива
   {
       m[i] = rand()%100;
       cout<< m[i]<<' ';
   }
   cout<<endl;
   while ((f == true)&&(i<n))
   {
       if (m[i]<m[i+1])
       {
           i++;
       }
       else
       {
           f = false;
       }
   }
   if (f == false)
   {
       cout<<"массив не упорядочен";
   }
   else
   {
       cout<<"массив упорядочен";
   }
   return 0;
}