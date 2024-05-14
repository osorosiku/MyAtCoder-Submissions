#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N, X, Y, Z;
  cin >> N >> X >> Y >> Z;
  bool jud = false;
  if (X > Y) {
    for (int i = Y; i < X; i++) {
      if (i == Z) {
        jud = true;
        break;
      }
    }
  } else if (X < Y) {
    for (int i = X; i < Y; i++) {
      if (i == Z) {
        jud = true;
        break;
      }
    }
  } else if (X == Z) {
    jud = true;
  }
  if (jud) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}