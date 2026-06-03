#include <vector>

void eliminarDuplicados(std::vector<int>& vec) {
    for (size_t i = 0; i < vec.size(); ++i) {
        for (size_t j = i + 1; j < vec.size();) {
            if (vec[i] == vec[j]) {
                vec.erase(vec.begin() + j);
            } else {
                ++j;
            }
        }
    }
}
