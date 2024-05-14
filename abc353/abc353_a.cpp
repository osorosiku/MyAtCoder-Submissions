#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N;
  cin >> N;
  vector<int> bul(N + 1);
  int ans = 0;
  for (int i = 1; i <= N; i++) {
    cin >> bul.at(i);
  }
  int higt = bul.at(1);
  for (int i = 2; i <= N; i++) {
    higt = max(higt, bul.at(i));
    // cout << higt << endl;
    if (higt != bul.at(1)) {
      // cout << "i" << i << endl;
      ans = i;
      break;
    }
  }
  if (higt == bul.at(1)) {
    cout << -1 << endl;
  } else {
    cout << ans;
  }
}