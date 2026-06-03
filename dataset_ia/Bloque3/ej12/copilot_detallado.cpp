#include <cstring>
#include <new>

char* concatenarCadenas(const char* str1, const char* str2)
{
    if (!str1 || !str2)
        return nullptr;

    const std::size_t len1 = std::strlen(str1);
    const std::size_t len2 = std::strlen(str2);

    char* resultado = new (std::nothrow) char[len1 + len2 + 1];
    if (!resultado)
        return nullptr;

    for (std::size_t i = 0; i < len1; ++i)
        resultado[i] = str1[i];

    for (std::size_t i = 0; i < len2; ++i)
        resultado[len1 + i] = str2[i];

    resultado[len1 + len2] = '\0';

    return resultado;
}

