#include <string>
#include <cctype>
#include <algorithm>

bool esPalindromo(const std::string& texto) {
    if (texto.empty()) return true;
    
    size_t left = 0;
    size_t right = texto.length() - 1;
    
    while (left < right) {
        // Skip non-alphanumeric characters from left
        while (left < right && std::isspace(static_cast<unsigned char>(texto[left]))) {
            ++left;
        }
        
        // Skip non-alphanumeric characters from right
        while (left < right && std::isspace(static_cast<unsigned char>(texto[right]))) {
            --right;
        }
        
        if (left >= right) break;
        
        // Compare characters case-insensitively
        char leftChar = std::tolower(static_cast<unsigned char>(texto[left]));
        char rightChar = std::tolower(static_cast<unsigned char>(texto[right]));
        
        if (leftChar != rightChar) {
            return false;
        }
        
        ++left;
        --right;
    }
    
    return true;
}
