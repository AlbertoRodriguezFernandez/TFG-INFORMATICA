#include <vector>
#include <unordered_set>
#include <algorithm>

void eliminarDuplicados(std::vector<int>& vec) {
    if (vec.size() < 2) return;

    std::unordered_set<int> seen;
    seen.reserve(vec.size());

    auto it = std::remove_if(vec.begin(), vec.end(),
        [&seen](int value) {
            return !seen.insert(value).second;
        });

    vec.erase(it, vec.end());
}
