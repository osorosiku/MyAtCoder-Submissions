#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int n;
  cin >> n;
  n *= 2;
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  int cnt = 0;
  for (int i = 0; i < n - 2; i++) {
    if (a.at(i) == a.at(i + 2)) {
      cnt++;
    }
  }
  cout << cnt << endl;
}