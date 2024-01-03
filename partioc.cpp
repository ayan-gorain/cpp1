#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector <int> v={2,3,3,2,1,3,1};
    
    
  
    // for (int i = 0; i < v.size(); i++)
    // {
    //    cin>>v[i];
      
    // }
    // for (int i = 0; i < v.size(); i++)
    // {
    //    cout<<v[i]<<" ";
    // }
    int count=0;
    int n;
    cin>>n;
    for (int i = 0; i < v.size(); i++)
    {
        if(v[i]>n){
            count++;
        }
    }
    cout<<count;
    
    

  return 0;
}