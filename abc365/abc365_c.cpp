#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{

  ll n, m;
  int inf = 1000000001;
  cin >> n >> m;
  vector<ll> a(n);

  rep(i, n) cin >> a.at(i);
  sort(a.rbegin(), a.rend());
  auto f = [&](ll x) -> bool
  {
    ll s = 0;
    rep(i, n) s += min(x, a.at(i));
    return s <= m;
  };
  if (f(inf))
  {
    cout << "infinite";
  }
  else
  {
    ll st = 0, end = inf;

    while (st < end - 1)
    {
      ll jud = (st + end) / 2;
      if (f(jud))
      {
        st = jud;
      }
      else
      {
        end = jud;
      }
    }
    cout << st;
  }
}
