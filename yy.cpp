#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {

    vector<int> v={1,2,3,4,5,6,9};
    
    int sum=0;
    int summ=0;
    for(int ele:v){
        if(ele%2==0){
            sum=ele+sum;

        }
        else if(ele%2!=0){
            summ=ele+summ;

        }

    }
    cout<<sum<<endl;
    cout<<summ<<endl;
    

  return 0;
}