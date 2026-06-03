#include <cstring>

char* concatenarCadenas(const char* str1, const char* str2) {
    int len1 = 0;
    int len2 = 0;

    while (str1[len1] != '\0') {
        len1++;
    }

    while (str2[len2] != '\0') {
        len2++;
    }

    char* resultado = new char[len1 + len2 + 1];

    for (int i = 0; i < len1; i++) {
        resultado[i] = str1[i];
    }

    for (int i = 0; i < len2; i++) {
        resultado[len1 + i] = str2[i];
    }

    resultado[len1 + len2] = '\0';

    return resultado;
}
