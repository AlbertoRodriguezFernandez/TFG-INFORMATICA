#include <string>
#include <cctype>

bool esPalindromo(const std::string& texto) {
    std::size_t izquierda = 0;
    std::size_t derecha = texto.size();

    if (derecha == 0) return true;
    derecha--;

    while (izquierda < derecha) {
        while (izquierda < derecha && std::isspace(static_cast<unsigned char>(texto[izquierda]))) {
            ++izquierda;
        }
        while (izquierda < derecha && std::isspace(static_cast<unsigned char>(texto[derecha]))) {
            --derecha;
        }

        if (std::tolower(static_cast<unsigned char>(texto[izquierda])) !=
            std::tolower(static_cast<unsigned char>(texto[derecha]))) {
            return false;
        }

        ++izquierda;
        --derecha;
    }

    return true;
}
