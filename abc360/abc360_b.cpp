#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  string s, t;
  cin >> s >> t;
  bool jud = false;
  for (int w = 1; w < s.size(); w++) {
    for (int c = 1; c <= w && c < s.size(); c++) {
      string com;
      for (int i = 0; i < s.size(); i += w) {
        if (i + c - 1 < s.size()) {
          com += s.at(i + c - 1);
        }
      }
      if (com == t) {
        jud = true;
        break;
      }
    }
    if (jud) break;
  }
  if (jud) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}