#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[3] = {3 ,3 ,3};
    int n=3;
    int count=0;
    int countt=0;

    for (int i = 0; i < 3; i++)
    {
        if(arr[i]>=n){
            count++;
          
        }
        else if(arr[i]<=n){
            countt++;
          
        }

    }
    cout<<count<<" "<<countt;
    

  return 0;
}