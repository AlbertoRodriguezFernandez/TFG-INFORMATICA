#include <limits>

void encontrarMaxMin(const int arr[], int size, int& maximo, int& minimo) {
    maximo = std::numeric_limits<int>::min();
    minimo = std::numeric_limits<int>::max();

    for (int i = 0; i < size; ++i) {
        if (arr[i] > maximo) {
            maximo = arr[i];
        }
        if (arr[i] < minimo) {
            minimo = arr[i];
        }
    }
}

