#include <string>
#include <cctype>

bool esPalindromo(const std::string& texto) {
    std::string limpio;
    for (char c : texto) {
        if (!std::isspace(static_cast<unsigned char>(c))) {
            limpio += std::tolower(static_cast<unsigned char>(c));
        }
    }
    int i = 0, j = limpio.size() - 1;
    while (i < j) {
        if (limpio[i] != limpio[j]) return false;
        ++i;
        --j;
    }
    return true;
}

