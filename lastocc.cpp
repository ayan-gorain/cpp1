#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {
    /*last occurance of a={1,2,3,2,1,3,1}*/
    vector<int> v={1,2,3,2,1,3,1};
    int count=-1;
    int x=1;
     for (int i = 0; i < v.size(); ++i) {
        if (v[i] == x) {
            count = i;
        }
    }

    cout<< count;
    for (int i = v.size()-1; i >=0; --i) {
        if (v[i] == x) {
            count = i;
            break;
        }
    }

    cout<< count;


  return 0;
}