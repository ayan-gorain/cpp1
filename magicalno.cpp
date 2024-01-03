#include <iostream>
#include <bits/stdc++.h>
using namespace std;



int main() {
    vector<int> v={-2, -1, 2, 4, 6};

    int s=0;
    int e=v.size()-1;
    int mid=s+(e-s)/2;
    int ans=-1;

   while (s<=e){
    if (mid==v[mid])
        {
            ans=mid;
            
        }
        else if (mid<v[mid])
        {
            s=mid+1;
        }
        else{
            e=mid-1;
        }

      }
   }
   cout<<ans;
   
    

  return 0;
}