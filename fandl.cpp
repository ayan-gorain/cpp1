#include <iostream>
#include <vector>
using namespace std;

int firstoc(vector<int>& arr, int n) {
    int s = 0;
    int e = arr.size() - 1;
    int ans = -1;

    while (s <= e) {
        int mid = s + (e - s) / 2;

        if (arr[mid] == n) {
            ans = mid;
            e = mid - 1; // Update end to search for the first occurrence
        } else if (arr[mid] > n) {
            e = mid - 1;
        } else {
            s = mid + 1;
        }
    }
    return ans;
}
int lastoc(vector<int>& arr, int n) {
    int s = 0;
    int e = arr.size() - 1;
    int ans = -1;

    while (s <= e) {
        int mid = s + (e - s) / 2;

        if (arr[mid] == n) {
            ans = mid;
            s = mid + 1; // Update end to search for the first occurrence
        } else if (arr[mid] > n) {
            e = mid - 1;
        } else {
            s = mid + 1;
        }
    }
    return ans;
}

int main() {
    vector<int> arr = {0, 0, 1, 1, 2, 2, 2, 2};
    int c = firstoc(arr, 2);
    cout << "First occurrence index: " << c << endl;

    return 0;
}
