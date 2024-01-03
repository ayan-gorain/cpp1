#include <iostream>
#include <algorithm>

int main() {
    int a[5] = {1, 2, 3, 2, 1};
    int reversed[11]; // New array to hold the reversed elements
    std::reverse_copy(std::begin(a), std::end(a), std::begin(reversed));
    for (int i = 0; i < 5; ++i)
    {

           std::reverse_copy(std::begin(a[i]), std::end(a[i]), std::begin(reversed));

    }
    



   

    return 0;
}
