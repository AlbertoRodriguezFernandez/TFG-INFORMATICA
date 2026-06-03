#include <cstddef>
#include <cstring>

char* concatenarCadenas(const char* str1, const char* str2) {
    if (str1 == nullptr || str2 == nullptr) {
        return nullptr;
    }
    
    size_t len1 = std::strlen(str1);
    size_t len2 = std::strlen(str2);
    
    char* result = new char[len1 + len2 + 1];
    
    std::memcpy(result, str1, len1);
    std::memcpy(result + len1, str2, len2 + 1);
    
    return result;
}
