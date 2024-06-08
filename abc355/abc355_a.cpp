#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int a, b;
  cin >> a >> b;
  int ans = -1;
  if (a == b) {
    cout << ans << endl;
  } else {
    for (int i = 1; i <= 3; i++) {
      if (i != a && i != b) {
        ans = i;
        cout << ans << endl;
      }
    }
  }
}