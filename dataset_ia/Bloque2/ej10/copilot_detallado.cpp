#include <vector>
#include <algorithm>

void eliminarDuplicados(std::vector<int>& vec) {
    if (vec.empty()) {
        return;
    }

    std::sort(vec.begin(), vec.end());

    auto it = std::unique(vec.begin(), vec.end());
    vec.erase(it, vec.end());
}

