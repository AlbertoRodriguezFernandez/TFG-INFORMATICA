#include <climits>

void encontrarMaxMin(const int arr[], int size, int& maximo, int& minimo) {
    maximo = INT_MIN;
    minimo = INT_MAX;
    
    for (int i = 0; i < size; i++) {
        if (arr[i] > maximo) {
            maximo = arr[i];
        }
        if (arr[i] < minimo) {
            minimo = arr[i];
        }
    }
}
