#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
  vector<int> vec;

  int num;
  while (cin >> num) {
    vec.push_back(num);
  }

  for (int i = vec.size() - 1; i >= 0; i--) {
    cout << vec[i] << endl;
  }

  return 0;
}
