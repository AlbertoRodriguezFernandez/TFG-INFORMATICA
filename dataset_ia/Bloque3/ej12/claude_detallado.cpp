#include <cstdlib>
#include <stdexcept>

char* concatenarCadenas(const char* str1, const char* str2) {
    if (str1 == nullptr || str2 == nullptr) {
        throw std::invalid_argument("Los punteros de entrada no pueden ser nullptr.");
    }

    std::size_t len1 = 0;
    while (str1[len1] != '\0') ++len1;

    std::size_t len2 = 0;
    while (str2[len2] != '\0') ++len2;

    const std::size_t totalLen = len1 + len2 + 1;

    char* result = static_cast<char*>(std::malloc(totalLen * sizeof(char)));
    if (result == nullptr) {
        throw std::bad_alloc();
    }

    for (std::size_t i = 0; i < len1; ++i) {
        result[i] = str1[i];
    }

    for (std::size_t i = 0; i < len2; ++i) {
        result[len1 + i] = str2[i];
    }

    result[len1 + len2] = '\0';

    return result;
}
