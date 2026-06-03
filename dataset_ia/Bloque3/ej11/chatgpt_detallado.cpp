#include <new>

int* crearArray(int n)
{
    if (n <= 0)
    {
        return nullptr;
    }

    try
    {
        return new int[n]();
    }
    catch (const std::bad_alloc&)
    {
        return nullptr;
    }
}
