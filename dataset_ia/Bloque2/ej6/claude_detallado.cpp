#include <string>
#include <algorithm>
#include <stdexcept>

std::string invertirCadena(const std::string& texto) {
    if (texto.empty()) {
        return {};
    }

    std::string resultado(texto.rbegin(), texto.rend());
    return resultado;
}
