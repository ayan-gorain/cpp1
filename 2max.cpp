#include <iostream>
#include <vector>
using namespace std;

vector<int> valueEqualToIndex(int arr[], int n) {
    vector<int> result;

    for (int i = 0; i < n; i++) {
        if (arr[i] == i) {
            result.push_back(i);
        }
    }

    return result;
}

int main() {
    int arr[] = {1, 2, 2, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    vector<int> result = valueEqualToIndex(arr, n);

    if (result.empty()) {
        cout << "No elements found where value is equal to index." << endl;
    } else {
        cout << "Elements where value is equal to index: ";
        for (int elem : result) {
            cout << elem << " ";
        }
        cout << endl;
    }

    return 0;
}
