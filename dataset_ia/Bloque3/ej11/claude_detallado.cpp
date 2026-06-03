#include <cstddef>

int* crearArray(const int n) noexcept {
    if (n <= 0) {
        return nullptr;
    }

    try {
        int* array = new int[static_cast<std::size_t>(n)]();
        return array;
    } catch (const std::bad_alloc&) {
        return nullptr;
    }
}
