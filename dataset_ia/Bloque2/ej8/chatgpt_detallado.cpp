#include <map>
#include <string>

std::map<char, int> contarFrecuencias(const std::string& texto) {
    std::map<char, int> frecuencias;

    if (texto.empty()) {
        return frecuencias;
    }

    for (const char c : texto) {
        ++frecuencias[c];
    }

    return frecuencias;
}
