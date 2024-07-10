#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int n;
  cin >> n;
  vector<string> s(n);
  for (int i = 0; i < n; i++) {
    cin >> s.at(i);
  }
  string t1 = "Takahashi", t2 = "Aoki";
  int cnt = 0;
  for (auto x : s) {
    if (x == t1) cnt++;
  }
  cout << cnt << endl;
}