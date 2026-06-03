#include <string>
#include <cctype>

bool esPalindromo(const std::string& texto) {
    int i = 0;
    int j = texto.length() - 1;
    
    while (i < j) {
        while (i < j && std::isspace(static_cast<unsigned char>(texto[i]))) {
            i++;
        }
        while (i < j && std::isspace(static_cast<unsigned char>(texto[j]))) {
            j--;
        }
        
        if (std::tolower(static_cast<unsigned char>(texto[i])) != 
            std::tolower(static_cast<unsigned char>(texto[j]))) {
            return false;
        }
        
        i++;
        j--;
    }
    
    return true;
}
