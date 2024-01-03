#include <iostream>
#include <algorithm>

int main() {
    int a[5] = {1, 2, 3, 2, 1};
    int reversed[11]; // New array to hold the reversed elements

    std::reverse_copy(std::begin(a), std::end(a), std::begin(reversed));

    bool isPerfect = true;
    for (int i = 0; i < 5; ++i) {
        if (a[i] != reversed[i]) {
            isPerfect = false;
            break; // Exit the loop early if any pair of elements doesn't match
        }
    }

    if (isPerfect) {
        std::cout << "perfect";
    } else {
        std::cout << "not perfect";
    }

    return 0;
}
