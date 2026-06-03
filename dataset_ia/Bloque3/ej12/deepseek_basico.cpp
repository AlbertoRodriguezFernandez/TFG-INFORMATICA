#include <cstddef>

char* concatenarCadenas(const char* str1, const char* str2) {
    // Calcular longitudes
    size_t len1 = 0;
    while (str1[len1] != '\0') {
        ++len1;
    }
    
    size_t len2 = 0;
    while (str2[len2] != '\0') {
        ++len2;
    }
    
    // Reservar memoria (len1 + len2 + 1 para el nulo final)
    char* resultado = new char[len1 + len2 + 1];
    
    // Copiar primera cadena
    for (size_t i = 0; i < len1; ++i) {
        resultado[i] = str1[i];
    }
    
    // Copiar segunda cadena
    for (size_t i = 0; i < len2; ++i) {
        resultado[len1 + i] = str2[i];
    }
    
    // Agregar carácter nulo final
    resultado[len1 + len2] = '\0';
    
    return resultado;
}
