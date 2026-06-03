#include <memory>

int* crearArray(int n) {
    if (n <= 0) {
        return nullptr;
    }

    auto ptr = std::make_unique<int[]>(n);
    std::fill(ptr.get(), ptr.get() + n, 0);
    return ptr.release();
}

