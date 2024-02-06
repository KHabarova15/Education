#include <iostream> 
#include <stdlib.h>
using namespace std;

int main()
{
    srand(time(0));
    int mas[100];
    int size = 10;
    
    for (int i = 0; i < size; i++)
        mas[i] = rand() % 100;
    for (int i = 0; i < size; i++)
        cout << mas[i] << " ";
        cout<<endl;
    int newsize = size - 5; // Убираем первые 5 элементов
    for (int i = 0; i < newsize; i++)
    {
    {
    mas[i] = mas[i + 5];
    }
    for (int i = newsize; i < newsize + 3; i++) // Добавляем новые 3 элемента
    {
    mas[i] = rand() % 100;
    }
    }
    for (int i = 0; i < newsize + 3; i++)
        cout << mas[i] << " ";
}
