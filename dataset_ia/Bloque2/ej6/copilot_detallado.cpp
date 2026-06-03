#include <string>
#include <algorithm>

std::string invertirCadena(const std::string& texto) {
    std::string resultado;
    resultado.reserve(texto.size());

    std::reverse_copy(texto.begin(), texto.end(), std::back_inserter(resultado));

    return resultado;
}

