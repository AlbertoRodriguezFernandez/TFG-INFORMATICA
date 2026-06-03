#include <cstddef>
#include <new>

char* concatenarCadenas(const char* str1, const char* str2)
{
    if (str1 == nullptr || str2 == nullptr)
    {
        return nullptr;
    }

    std::size_t len1 = 0;
    while (str1[len1] != '\0')
    {
        ++len1;
    }

    std::size_t len2 = 0;
    while (str2[len2] != '\0')
    {
        ++len2;
    }

    char* resultado = new (std::nothrow) char[len1 + len2 + 1];
    if (resultado == nullptr)
    {
        return nullptr;
    }

    for (std::size_t i = 0; i < len1; ++i)
    {
        resultado[i] = str1[i];
    }

    for (std::size_t i = 0; i < len2; ++i)
    {
        resultado[len1 + i] = str2[i];
    }

    resultado[len1 + len2] = '\0';

    return resultado;
}
