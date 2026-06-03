#include <map>
#include <string>
#include <string_view>

/**
 * @brief Cuenta la frecuencia de cada carácter en una cadena de texto.
 * 
 * Utiliza std::string_view para evitar copias innecesarias de la cadena de entrada
 * y garantiza una complejidad temporal de O(n log m), donde n es el número de
 * caracteres y m es el número de caracteres únicos.
 */
std::map<char, int> contarFrecuencias(std::string_view texto) {
    std::map<char, int> frecuencias;

    for (const char c : texto) {
        // El operador [] de std::map inserta el elemento con valor por defecto (0) 
        // si la clave no existe, lo cual es seguro y eficiente para este caso.
        frecuencias[c]++;
    }

    return frecuencias;
}
