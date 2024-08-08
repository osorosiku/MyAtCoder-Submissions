#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  vector<vector<int>> vec(n, vector<int>(2));
  for (int i = 0; i < n; i++)
  {
    int x;
    cin >> x;
    vec.at(i).at(0) = x;
    vec.at(i).at(1) = i;
  }
  sort(vec.rbegin(), vec.rend());

  cout << vec.at(1).at(1) + 1 << endl;
}