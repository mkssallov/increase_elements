#include <vector>

std::vector<int> increaseElements(std::vector<int>& vec, int n) {
    for (auto& element : vec) {
        element += n;
    }
    return vec;
}

