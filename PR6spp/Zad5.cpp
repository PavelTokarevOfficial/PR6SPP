

#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "russian");
    int mass[10], min = 1000, min_i, max = 0, max_i,swap;
        //Создание массива
    for (int i = 0; i <= 9; i++)
    {
        mass[i] = rand() % 30 + 1;
    }
        //Вывод
    cout << "Массив: \n";
    for (int i = 0; i <= 9; i++) {
        cout << mass[i] << " ";
    }
        //определение минимального
    for (int i = 0; i <= 9; i++) {
        if (mass[i] < min)
        {
            min = mass[i];
            min_i = i;
        }
    }
        //определение массимального
    for (int i = 0; i <= 9; i++) {
        if (mass[i] > max)
        {
            max = mass[i];
            max_i = i;
        }
    }
        //swap    
    swap = mass[min_i];
    mass[min_i] = mass[max_i];
    mass[max_i] = swap;
        //Вывод
    cout << "\n Массив: \n";
    for (int i = 0; i <= 9; i++) {
        cout << mass[i] << " ";
    }
}


