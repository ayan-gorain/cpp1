#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main() {
    int sum=0;

    vector<int> v={1,2,3,5};
    sort(v.begin(),v.end());
    for (int i = 0; i < v.size(); i++)
    {
        sum=sum+v[i];
        
    }
    cout<<sum<<endl;
   
    int n = v.size() + 1; // Size of vector + 1
    int sum1 = (n * (n + 1)) / 2; 
    cout<<sum1<<endl;
    int nn=sum1-sum;
    cout<<nn;
    
    

  return 0;
}
// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// int main() {
//     vector<int> v = {1, 2, 3, 5}; // Given sorted array (let's assume it's sorted)

//     // Find the sum of numbers in the array
//     int actualSum = 0;
//     for (int i = 0; i < v.size(); i++) {
//         actualSum += v[i];
//     }

//     // Find the expected sum of consecutive integers from 1 to n
//     int n = v.size() + 1; // Since there is one missing number
//     int expectedSum = (n * (n + 1)) / 2;

//     // The missing number is the difference between the expected sum and the actual sum
//     int missingNumber = expectedSum - actualSum;

//     cout << "The missing number is: " << missingNumber << endl;

//     return 0;
// }
