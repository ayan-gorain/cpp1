#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> a={31, 40, 93, 40, 98};
    vector<int> ab;
    reverse(a.begin(), a.end());
    for (int i = 0; i < a.size()+1; ++i){
        if ( a[i] > a[i - 1] && a[i] > a[i + 1]) {
            ab.push_back(a[i]);
           

        }
        

    }
     reverse(ab.begin(), ab.end());
 ab.push_back(a[a.size()]);


    for(int ele:ab){
        cout<<ele<<"  ";
    }

  return 0;
}