#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  string s, t;
  cin >> s >> t;
  bool jud = false;
  int cnt = 0;

  transform(s.begin(), s.end(), s.begin(), ::toupper);
  if (t.back() == 'X') {
    s.push_back('X');
  }
  for (int i = 0; i < s.size(); i++) {
    if (s.at(i) == t.at(cnt)) {
      cnt++;
      if (cnt == 3) {
        jud = true;
        break;
      }
    }
  }
  if (jud) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}