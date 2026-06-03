#include <string>
#include <cctype>

bool esPalindromo(const std::string& texto) {
    std::string limpio;
    limpio.reserve(texto.size());

    for (unsigned char c : texto) {
        if (!std::isspace(c)) {
            limpio.push_back(static_cast<char>(std::tolower(c)));
        }
    }

    std::size_t i = 0;
    std::size_t j = limpio.size();
    if (j == 0) return true;
    j--;

    while (i < j) {
        if (limpio[i] != limpio[j]) {
            return false;
        }
        ++i;
        --j;
    }

    return true;
}

