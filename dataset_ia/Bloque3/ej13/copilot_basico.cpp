#include <iostream>

void invertirArray(int* arr, int size) {
    int* inicio = arr;
    int* fin = arr + size - 1;

    while (inicio < fin) {
        int temp = *inicio;
        *inicio = *fin;
        *fin = temp;

        ++inicio;
        --fin;
    }
}

