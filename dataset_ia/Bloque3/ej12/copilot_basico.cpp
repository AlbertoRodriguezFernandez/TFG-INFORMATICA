#include <cstring>
#include <cstdlib>

char* concatenarCadenas(const char* str1, const char* str2) {
    size_t len1 = std::strlen(str1);
    size_t len2 = std::strlen(str2);

    char* resultado = (char*)std::malloc(len1 + len2 + 1);
    if (!resultado) return nullptr;

    for (size_t i = 0; i < len1; ++i)
        resultado[i] = str1[i];

    for (size_t i = 0; i < len2; ++i)
        resultado[len1 + i] = str2[i];

    resultado[len1 + len2] = '\0';
    return resultado;
}

