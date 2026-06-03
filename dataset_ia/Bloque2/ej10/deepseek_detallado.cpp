#include <vector>
#include <algorithm>

void eliminarDuplicados(std::vector<int>& vec) {
    if (vec.empty() || vec.size() == 1) {
        return;
    }

    auto it = std::unique(vec.begin(), vec.end());
    vec.erase(it, vec.end());
}
