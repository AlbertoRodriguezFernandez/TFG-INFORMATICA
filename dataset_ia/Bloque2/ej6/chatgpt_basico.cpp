#include <string>

std::string invertirCadena(const std::string& texto) {
    return std::string(texto.rbegin(), texto.rend());
}
