#include <cstdlib>

char* concatenarCadenas(const char* str1, const char* str2) {
    std::size_t len1 = 0, len2 = 0;
    while (str1[len1] != '\0') ++len1;
    while (str2[len2] != '\0') ++len2;

    char* result = static_cast<char*>(std::malloc(len1 + len2 + 1));

    for (std::size_t i = 0; i < len1; ++i) result[i] = str1[i];
    for (std::size_t i = 0; i < len2; ++i) result[len1 + i] = str2[i];
    result[len1 + len2] = '\0';

    return result;
}
