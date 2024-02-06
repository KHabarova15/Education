#include <iostream> 
#include <stdlib.h>
using namespace std;

int main()
{
    srand(time(0));
    int mas[100];
    int size = 5;
    
    for (int i = 0; i < size; i++)
        mas[i] = rand() % 10;
    for (int i = 0; i < size; i++)
        cout << mas[i] << " ";
    int k = 0;
    for (int i = 0; i < size; i++)
        if (mas[i] % 2 == 0) k += 1;
    
    cout << endl << k;
    for (int i = 0; i < size; i++)
    {
        if (mas[i] % 2 == 0)
        {
            size ++;
            for (int j = size; j >= i + 1; j--)
                mas[j] = mas[j - 1];
            mas[i] = -1;
            i++;
        }
    }
    cout << endl;
    for (int i = 0; i < size; i++)
            cout << mas[i] << " ";
    for (int i = 0; i < size; i++)
 {
     if (mas[i] % 2 == 0)
     {
         
         for (int j = i; j < size; j++)
         {
             mas[j] = mas[j + 1];
         }
         size--;
         i--;
     }
 }
    cout << endl;
    for (int i = 0; i < size; i++)
            cout << mas[i] << " ";
}