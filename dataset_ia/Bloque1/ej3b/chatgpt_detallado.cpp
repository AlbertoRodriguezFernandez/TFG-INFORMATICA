#include <stdexcept>

int fibonacci(int n)
{
    if (n < 0)
    {
        throw std::invalid_argument("n must be non-negative");
    }

    if (n <= 1)
    {
        return n;
    }

    int prev = 0;
    int curr = 1;

    for (int i = 2; i <= n; ++i)
    {
        const int next = prev + curr;
        prev = curr;
        curr = next;
    }

    return curr;
}
