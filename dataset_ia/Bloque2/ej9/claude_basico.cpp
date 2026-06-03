#include <string>
#include <algorithm>
#include <cctype>

bool esPalindromo(const std::string& texto) {
    std::string limpio;
    for (char c : texto)
        if (!std::isspace(c)) limpio += std::tolower(c);
    return limpio == std::string(limpio.rbegin(), limpio.rend());
}
