#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  vector<vector<int>> a(3, vector<int>(2));
  vector<pair<int, int>> b;
  bool rs = false;

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 2; j++) {
      cin >> a[i][j];
    }
  }
  for (int i = 0; i < 3; i++) {
    for (int j = i + 1; j < 3; j++) {
      int vecf = a[i][0] - a[j][0];  // abs関数の使用を削除
      int vecs = a[i][1] - a[j][1];  // abs関数の使用を削除
      b.push_back(make_pair(vecf, vecs));
    }
  }
  for (int i = 0; i < 3; i++) {
    for (int j = i + 1; j < 3; j++) {
      if (b[i].first * b[j].first + b[i].second * b[j].second == 0) {
        rs = true;
      }
    }
  }
  if (rs) {
    cout << "Yes" << endl;

  } else {
    cout << "No" << endl;
  }
  return 0;
}
