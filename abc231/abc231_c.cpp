#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
  int n, q;
  cin >> n >> q;
  vector<int> vec(n);
  rep(i, n) cin >> vec[i];
  sort(vec.begin(), vec.end()); // 昇順にソート
  vector<int> qu(q);
  rep(i, q) cin >> qu[i];

  auto f = [&](int x) -> int
  {
    int st = 0, end = n;

    while (st < end - 1)
    {
      int jud = (st + end) / 2;
      if (vec.at(jud) >= x)
      {
        end = jud;
      }
      else
      {
        st = jud;
      }
    }
    if (vec[st] >= x)
    {
      return st;
    }
    else
    {
      return end;
    }
  };
  rep(i, q) cout << n - f(qu[i])
                 << endl;
}
