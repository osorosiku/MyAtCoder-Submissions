#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int n;
  cin >> n;
  vector<int> vec(n);
  rep(i, n) cin >> vec.at(i);
  int cnt = 0;
  while (true) {
    cnt++;
    sort(vec.rbegin(), vec.rend());
    vec.at(0)--;
    vec.at(1)--;
    int ch = 0;
    for (int i = 0; i < n; i++) {
      if (vec.at(i) >= 1) {
        ch++;
      }
    }
    if (ch <= 1) {
      cout << cnt << endl;
      return 0;
    }
  }
}