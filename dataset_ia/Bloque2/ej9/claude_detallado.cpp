#include <string>
#include <algorithm>
#include <cctype>

bool esPalindromo(const std::string& texto) {
    std::string filtrado;
    filtrado.reserve(texto.size());

    std::copy_if(texto.cbegin(), texto.cend(), std::back_inserter(filtrado),
        [](unsigned char c) { return !std::isspace(c); });

    std::transform(filtrado.begin(), filtrado.end(), filtrado.begin(),
        [](unsigned char c) { return std::tolower(c); });

    return std::equal(filtrado.cbegin(),
                      filtrado.cbegin() + filtrado.size() / 2,
                      filtrado.crbegin());
}
