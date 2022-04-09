#include "Header.h"

using std::swap;

void print(int* arr, unsigned size) {
    cout << "ћассив целых в отсортированном виде: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}
void print(double* arr, unsigned size) {
    cout << "ћассив дробных в отсортированном виде: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}

void BubbleSort(int* arr, unsigned size) {
    for (int i = 0; i < size-i; i++) {
        for (int j = 0; j < size - 1-i; j++) {
            if (arr[j] > arr[j + 1]) {
                int b = arr[j]; 
                arr[j] = arr[j + 1]; 
                arr[j + 1] = b; 
            }
        }
    }
    print(arr, size);
}
void BubbleSort(double* arr, unsigned size) {
    for (int i = 0; i < size-i; i++) {
        for (int j = 0; j < size - 1- i; j++) {
            if (arr[j] > arr[j + 1]) {
                double b = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = b;
            }
        }
    }
    print(arr, size);
}
