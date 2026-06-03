#include <vector>
#include <algorithm>

void eliminarDuplicados(std::vector<int>& vec) {
    std::sort(vec.begin(), vec.end());
    vec.erase(std::unique(vec.begin(), vec.end()), vec.end());
}

