#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[4] = {-3, 3, -2, 2};
    vector<int> neg;
    vector<int> pos;
    vector<int> final(4);

    for (int i = 0; i < 4; i++)
    {

        if (arr[i] < 0)
        {
            neg.push_back(arr[i]);
        }
        if (arr[i] > 0)
        {
            pos.push_back(arr[i]);
        }
    }
    sort(neg.begin(), neg.end());
    sort(pos.begin(), pos.end());
    for (int i = 0; i < 2; i++)
    {
        cout << neg[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < 2; i++)
    {
        cout << pos[i] << " ";
    }
    cout << endl;
    merge(neg.begin(), neg.end(), pos.begin(), pos.end(), final.begin());
    for (int i = 0; i < final.size(); i++)
    {
        cout << final[i] << " ";
    }
    return 0;
}