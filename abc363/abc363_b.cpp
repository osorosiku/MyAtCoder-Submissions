#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int n, t, p;
  cin >> n >> t >> p;
  vector<int> hair(n);
  rep(i, n) cin >> hair[i];
  int cnt = 0, days = 0;
  bool jud = true;
  while (true) {
    cnt = 0;
    for (int i = 0; i < n; i++) {
      if (hair[i] >= t) cnt++;
    }
    if (cnt >= p) {
      break;
    }
    for (int i = 0; i < n; i++) {
      hair[i]++;
    }
    days++;
  }
  cout << days << endl;
}