#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {

    int a[]={-3, 3, -2, 2};
    int neg[];
    int pos=0;

    for (int i = 0; i < 4; i++)
    {
        if(a[i]<0){
            neg++;

        }
    }
    cout<<neg; 
    



  return 0;
}