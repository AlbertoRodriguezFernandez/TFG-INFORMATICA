#include <string>
#include <algorithm>
#include <cctype>
#include <string_view>

/**
 * @brief Determina si una cadena es un palíndromo de manera óptima y segura.
 * 
 * Utiliza un enfoque de dos punteros (iteradores) para evitar asignaciones 
 * de memoria adicionales, manteniendo una complejidad temporal O(n) 
 * y una complejidad espacial O(1).
 */
bool esPalindromo(const std::string& texto) {
    if (texto.empty()) {
        return true;
    }

    auto izq = texto.begin();
    auto der = texto.end() - 1;

    while (izq < der) {
        // Omitir espacios en blanco desde la izquierda
        while (izq < der && std::isspace(static_cast<unsigned char>(*izq))) {
            ++izq;
        }
        // Omitir espacios en blanco desde la derecha
        while (izq < der && std::isspace(static_cast<unsigned char>(*der))) {
            --der;
        }

        // Comparar caracteres ignorando mayúsculas/minúsculas
        if (std::tolower(static_cast<unsigned char>(*izq)) != 
            std::tolower(static_cast<unsigned char>(*der))) {
            return false;
        }

        ++izq;
        --der;
    }

    return true;
}
