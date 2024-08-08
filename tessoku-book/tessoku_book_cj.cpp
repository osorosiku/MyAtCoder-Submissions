#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
  int n;
  cin >> n;
  vector<int> vec(n);
  rep(i, n) cin >> vec[i];
  int q;
  cin >> q;
  vector<int> query(q);
  rep(i, q) cin >> query[i];
  sort(vec.begin(), vec.end());

  auto f = [&](int x) -> int
  {
    int st = 0, end = n;
    while (st < end)
    {
      int jud = (st + end) / 2;
      if (vec.at(jud) < query.at(x))
      {
        st = jud + 1;
      }
      else
      {
        end = jud;
      }
    }
    return st;
  };

  for (int i = 0; i < q; i++)
  {
    cout << f(i) << endl;
  }

  return 0;
}
