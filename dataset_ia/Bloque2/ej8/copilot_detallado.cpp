#include <map>
#include <string>

std::map<char, int> contarFrecuencias(const std::string& texto) {
    std::map<char, int> frecuencias;

    for (unsigned char c : texto) {
        ++frecuencias[c];
    }

    return frecuencias;
}

