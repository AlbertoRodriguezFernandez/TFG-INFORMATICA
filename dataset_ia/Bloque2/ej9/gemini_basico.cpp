#include <string>
#include <cctype>

bool esPalindromo(const std::string& texto) {
    int inicio = 0;
    int fin = texto.length() - 1;

    while (inicio < fin) {
        while (inicio < fin && !std::isalnum(static_cast<unsigned char>(texto[inicio]))) {
            inicio++;
        }
        while (inicio < fin && !std::isalnum(static_cast<unsigned char>(texto[fin]))) {
            fin--;
        }

        if (std::tolower(static_cast<unsigned char>(texto[inicio])) != std::tolower(static_cast<unsigned char>(texto[fin]))) {
            return false;
        }

        inicio++;
        fin--;
    }

    return true;
}
