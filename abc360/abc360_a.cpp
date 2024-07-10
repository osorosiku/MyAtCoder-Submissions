#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  string s;
  cin >> s;
  bool jud = true;
  if (s.at(2) == 'R') {
    jud = false;
  } else if (s.at(0) != 'R' && (s.at(1) == 'M' || s.at(0) == 'M')) {
    jud = false;
  }
  if (jud) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}