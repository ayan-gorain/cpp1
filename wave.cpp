#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {2, 4, 7, 8, 9};

    for (size_t i = 1; i < arr.size(); i += 2) {
        if (i > 0 && arr[i] > arr[i - 1]) {
            swap(arr[i], arr[i - 1]);
        }
    }

    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
