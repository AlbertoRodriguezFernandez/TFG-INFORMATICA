#include <stdexcept>
#include <limits>
#include <algorithm>

void encontrarMaxMin(const int arr[], int size, int& maximo, int& minimo)
{
    if (arr == nullptr)
        throw std::invalid_argument("El puntero al array no puede ser nulo.");

    if (size <= 0)
        throw std::invalid_argument("El tamaño del array debe ser mayor que cero.");

    maximo = std::numeric_limits<int>::min();
    minimo = std::numeric_limits<int>::max();

    for (int i = 0; i < size; ++i)
    {
        if (arr[i] > maximo) maximo = arr[i];
        if (arr[i] < minimo) minimo = arr[i];
    }
}
