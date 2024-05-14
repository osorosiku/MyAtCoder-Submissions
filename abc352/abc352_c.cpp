#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N;
  cin >> N;
  vector<int> a(N), b(N);
  rep(i, N) {
    cin >> a.at(i);
    cin >> b.at(i);
  }
  long long ans = 0;
  int mx = 0;
  rep(i, N) mx = max(mx, b.at(i) - a.at(i));
  ans = mx;
  rep(i, N) ans += a.at(i);
  cout << ans << endl;
}
