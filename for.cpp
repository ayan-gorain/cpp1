#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {
     vector<int> v={1,2,3,4,5}; 
     v.insert(v.end()-2,88);
    for (auto i : v) 
   {cout << i << ' '; }
  
   cout << '\n'; 

  return 0;
}
