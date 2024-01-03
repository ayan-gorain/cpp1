#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int binaryser(vector<int> &arr,int size){
    sort(arr.begin(),arr.end());
    int start=0;
    int end=size-1;
    int mid=(start+end)/2;
    while(start<=end){
      if(mid<mid+1 && mid>mid-1 || mid==mid+1 || mid==mid-1){
        return mid;
      }
      else
      {
        if (mid<mid+1)
        {
            start=mid+1;
        }
        else{
            end=mid-1;
        }

      }
      mid=(start+end)/2;

    }
    

}

int main() {

    vector <int> a = {1, 2 ,3, 4 ,5, 6, 5 ,4 ,3, 2 ,1};
    
     int index=binaryser(a,11);
     cout<<index;

    



  return 0;
}