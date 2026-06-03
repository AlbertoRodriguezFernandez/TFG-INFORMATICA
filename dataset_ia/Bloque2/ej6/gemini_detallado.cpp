#include <string>
#include <algorithm>

/**
 * @brief Invierte una cadena de texto de manera eficiente.
 * 
 * Utiliza el constructor de std::string que reserva el tamaño necesario 
 * y emplea iteradores inversos para una complejidad lineal O(n). 
 * Se garantiza la seguridad frente a excepciones y la ausencia de fugas
 * de memoria gracias al manejo automático de recursos de la STL.
 */
std::string invertirCadena(const std::string& texto) {
    if (texto.empty()) {
        return {};
    }

    return std::string(texto.rbegin(), texto.rend());
}
