#include <string>
#include <cctype>

bool esPalindromo(const std::string& texto) {
    int i = 0;
    int j = texto.size() - 1;

    while (i < j) {
        while (i < j && std::isspace(texto[i])) i++;
        while (i < j && std::isspace(texto[j])) j--;

        if (std::tolower(texto[i]) != std::tolower(texto[j])) {
            return false;
        }
        i++;
        j--;
    }
    return true;
}
