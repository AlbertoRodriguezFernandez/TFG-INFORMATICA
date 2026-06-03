#include <vector>

int fibonacci(int n) {
    static std::vector<int> memo = {0, 1};

    if (n < 0) {
        return 0;
    }

    if (n < static_cast<int>(memo.size())) {
        return memo[n];
    }

    memo.push_back(fibonacci(memo.size() - 1) + fibonacci(memo.size() - 2));
    return fibonacci(n);
}
