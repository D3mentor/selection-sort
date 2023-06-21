#include <iostream>

using namespace std;


int main()
{
    int a[10] = { 23, 8, 42, 69, 228, 1337, 322, 404, 1, 666 };
    int min;


    //Сортировка
    for (int i = 0; i < 9; i++)
    {
        //Ищет позицию минимального элемента
        min = i;
        for (int j = i + 1; j < 10; j++)
        {
            if (a[j] < a[min])
            {
                min = j;
            }
        }
        //Меняет местами
        int b = a[i];
        a[i] = a[min];
        a[min] = b;

    }
    for (int i = 0; i < 10; i++) {
        cout << a[i] << " ";
    }
    return 0;
}