#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
  int n, x;
  cin >> n >> x;
  vector<int> vec(n);
  rep(i, n) cin >> vec.at(i);
  int st = 0, ed = n;
  while (st < ed - 1)
  {
    int jud = (st + ed) / 2;
    if (vec.at(jud) > x)
    {
      ed = jud;
    }
    else
    {
      st = jud;
    }
  }
  cout << st + 1;
}