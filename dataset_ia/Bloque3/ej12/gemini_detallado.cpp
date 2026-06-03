#include <iostream>
#include <cstring>
#include <new>

/**
 * @brief Concatena dos cadenas de estilo C en una nueva zona de memoria dinámica.
 * 
 * @param str1 Primera cadena (null-terminated).
 * @param str2 Segunda cadena (null-terminated).
 * @return char* Puntero a la nueva cadena concatenada. El llamador es responsable de usar 'delete[]'.
 *         Retorna nullptr si alguna entrada es inválida o falla la asignación.
 */
char* concatenarCadenas(const char* str1, const char* str2) {
    if (!str1 || !str2) {
        return nullptr;
    }

    const size_t len1 = std::strlen(str1);
    const size_t len2 = std::strlen(str2);
    const size_t totalLen = len1 + len2 + 1; // +1 para el carácter nulo '\0'

    try {
        char* resultado = new char[totalLen];

        // Copia manual de la primera cadena
        for (size_t i = 0; i < len1; ++i) {
            resultado[i] = str1[i];
        }

        // Copia manual de la segunda cadena
        for (size_t j = 0; j < len2; ++j) {
            resultado[len1 + j] = str2[j];
        }

        // Inserción manual del carácter nulo final
        resultado[totalLen - 1] = '\0';

        return resultado;
    } catch (const std::bad_alloc&) {
        // Manejo de error en caso de que falle la reserva de memoria
        return nullptr;
    }
}
