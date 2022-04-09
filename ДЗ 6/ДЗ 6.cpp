#include <windows.h>
#include <iostream>
#include "Header.h"
using namespace std;

void main()
{
    srand(time(NULL));
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int a;
    cout << "Введите размер: \n";
    cin >> a;
    int *mas = new int[a];
    double* masd = new double[a];
    for (int i = 0; i < a; i++) {
        mas[i] = rand();
    }
    for (int i = 0; i < a; i++) {
        masd[i] = rand()/10.1;
    }
    BubbleSort(mas, a);
    BubbleSort(masd, a);
    delete[] mas;
    delete[] masd;
}

