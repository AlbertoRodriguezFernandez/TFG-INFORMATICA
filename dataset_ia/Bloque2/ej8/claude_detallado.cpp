#include <map>
#include <string>

[[nodiscard]] std::map<char, int> contarFrecuencias(const std::string& texto)
{
    std::map<char, int> frecuencias;

    for (const char c : texto)
    {
        ++frecuencias[c];
    }

    return frecuencias;
}
