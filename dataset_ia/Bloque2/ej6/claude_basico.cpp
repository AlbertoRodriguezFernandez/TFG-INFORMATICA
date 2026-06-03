#include <string>
#include <algorithm>

std::string invertirCadena(const std::string& texto) {
    std::string resultado(texto.rbegin(), texto.rend());
    return resultado;
}
