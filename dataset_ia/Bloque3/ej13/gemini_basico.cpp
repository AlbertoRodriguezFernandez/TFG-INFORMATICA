#include <algorithm>

void invertirArray(int* arr, int size) {
    if (arr == nullptr || size <= 1) return;

    int* inicio = arr;
    int* fin = arr + (size - 1);

    while (inicio < fin) {
        int temp = *inicio;
        *inicio = *fin;
        *fin = temp;

        inicio++;
        fin--;
    }
}
