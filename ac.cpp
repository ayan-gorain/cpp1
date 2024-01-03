#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
  vector<int> v = {1, 2, 3, 4,5};
  bool flag = true;
  for (int i = 0; i < v.size(); i++)
  {
    if (v[i] <= v[i - 1])
    {
      flag = false;
    }
  }
  cout << flag;

  return 0;
}