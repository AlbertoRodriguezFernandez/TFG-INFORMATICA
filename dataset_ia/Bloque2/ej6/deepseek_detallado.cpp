#include <string>
#include <algorithm>

std::string invertirCadena(const std::string& texto) {
    std::string resultado;
    resultado.reserve(texto.size());
    
    std::copy(texto.rbegin(), texto.rend(), std::back_inserter(resultado));
    
    return resultado;
}
