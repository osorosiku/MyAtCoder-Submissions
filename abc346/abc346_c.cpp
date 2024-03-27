#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  int n, k;
  cin >> n >> k;
  ll ans = (ll)k * (k + 1) / 2;
  set<int> st;
  for (int i = 0; i < n; i++) {
    int x = 0;
    cin >> x;
    if (x <= k) {
      st.insert(x);
    }
  }
  for (int x : st) {
    ans -= x;
  }
  cout << ans;
}