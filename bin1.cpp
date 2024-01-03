#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int binaryser(int arr[],int size,int key){
    int start=0;
    int end=size-1;
    int mid=(start+end)/2;
    while(start<=end){
      if(arr[mid]==key){
        return mid;
      
    }
    // right side
    else if (key>arr[mid])
    {
      start=mid+1;
    } 
    //left side
    else if (key<arr[mid])
    {
      end=mid-1;
    }
    mid=(start+end)/2;

    }
    

}

int main() {

    int even[6]={2,4,6,8,12,18};
    int odd[5]={3,8,11,14,16};

    int index=binaryser(even,6,12);

    cout<<index<<endl;
    int index1=binaryser(even,6,13);

    cout<<index1;
    int index2=binaryser(odd,6,11);

    cout<<index2;



  return 0;
}