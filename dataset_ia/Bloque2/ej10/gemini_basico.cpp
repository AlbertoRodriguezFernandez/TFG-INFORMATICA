#include <vector>
#include <algorithm>

void eliminarDuplicados(std::vector<int>& vec) {
    if (vec.empty()) return;

    std::sort(vec.begin(), vec.end());
    auto last = std::unique(vec.begin(), vec.end());
    vec.erase(last, vec.end());
}
