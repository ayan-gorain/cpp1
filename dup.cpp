#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v={3, 4, 12 ,3 ,12 ,3 ,4, 4 ,12, 7 ,11,6 ,5};
    vector<int> v1;
  
    sort(v.begin(),v.end());
    for (int i = 0; i < v.size()-1; i++)
    {
       if(v[i]==v[i+1]){
        v1.push_back(v[i]);

       }
     
      
    }
    if (v1.empty()) {
        cout << "-1" << endl;}
    for (int i = 0; i < v1.size(); i++)
    {
        if(v1[i]!=v1[i+1]){
            v1.push_back(i);

        }
      } 
       for (int i = 0; i < v1.size(); i++)
    {
        if(v1[i]==v1[i+1]){
           cout<<v[i]<<endl;

        }
      }
      
    
    
    


  return 0;
}