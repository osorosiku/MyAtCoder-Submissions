#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  long long n, x, y;
  cin >> n >> x >> y;
  long long la = 0, lb = 0;
  vector<int> a(n);
  vector<int> b(n);
  rep(i, n) cin >> a[i];
  rep(i, n) cin >> b[i];
  int cnt = 0;
  sort(a.rbegin(), a.rend());
  sort(b.rbegin(), b.rend());
  for (int i = 0; i < n; i++) {
    la += a[i];
    lb += b[i];
    cnt++;
    if (la > x || lb > y) {
      break;
    }
  }
  cout << cnt << endl;
}
