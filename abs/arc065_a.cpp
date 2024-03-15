#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  string divide[4] = {"dream", "dreamer", "erase", "eraser"};
  reverse(s.begin(), s.end());
  for (int i = 0; i < 4; i++) {
    reverse(divide[i].begin(), divide[i].end());
  }
  bool can = true;
  for (int i = 0; i < s.size();) {
    bool can2 = false;
    for (int j = 0; j < 4; j++) {
      string t = divide[j];
      if (s.substr(i, t.size()) == t) {
        can2 = true;
        i += t.size();
      }
    }
    if (!can2) {
      can = false;
      break;
    }
  }
  if (can) {
    cout << "YES";
  } else {
    cout << "NO";
  }
}