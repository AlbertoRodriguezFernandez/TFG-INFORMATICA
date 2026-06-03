#include <stdexcept>
#include <limits>

int factorial(int n)
{
    if (n < 0)
    {
        throw std::invalid_argument("factorial: n must be non-negative");
    }

    if (n == 0 || n == 1)
    {
        return 1;
    }

    int sub_result = factorial(n - 1);

    if (sub_result > std::numeric_limits<int>::max() / n)
    {
        throw std::overflow_error("factorial: integer overflow");
    }

    return n * sub_result;
}
