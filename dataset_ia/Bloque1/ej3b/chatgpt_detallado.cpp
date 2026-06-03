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

    return fibonacci(n - 1) + fibonacci(n - 2);
}
