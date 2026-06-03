#include <algorithm>
#include <cstddef>

void invertirArray(int* arr, int size)
{
    if (arr == nullptr || size <= 1)
    {
        return;
    }

    int* left = arr;
    int* right = arr + static_cast<std::ptrdiff_t>(size) - 1;

    while (left < right)
    {
        std::swap(*left, *right);
        ++left;
        --right;
    }
}
