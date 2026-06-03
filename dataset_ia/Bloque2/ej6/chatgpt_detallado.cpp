#include <string>
#include <algorithm>

std::string invertirCadena(const std::string& texto) {
    std::string resultado(texto);
    std::reverse(resultado.begin(), resultado.end());
    return resultado;
}
