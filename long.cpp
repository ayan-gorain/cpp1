#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {

   int arr[6]= {10 ,40 ,23 ,35 ,50, 7};
   int ans=arr[0];
   int count=1;

   for(int i=1;i<5;i++){
    

    if(arr[i]>arr[i-1]){
        count++;

    }
    else{
        break;
    }
    


   }
   
   cout<<count;


  return 0;
}