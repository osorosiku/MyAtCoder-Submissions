#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int h;
  cin >> h;
  int cnt = 0;
  for (int i = 0; i < 10000; i++) {
    int tall = pow(2, i) - 1;
    //  cout << tall << endl;
    if (h < tall) {
      break;
    }
    cnt++;
  }
  cout << cnt;
}