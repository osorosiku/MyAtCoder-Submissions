#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N, K;
  cin >> N >> K;
  int stcnt = 0, rest = 0;
  for (int i = 0; i < N; i++) {
    int a;
    cin >> a;
    if (rest < a) {
      rest = K;
      stcnt++;
    }
    rest -= a;
  }
  cout << stcnt << endl;
}