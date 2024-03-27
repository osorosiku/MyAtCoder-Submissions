#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  bool jud = true;
  if ((s.at(0) != '<') || (s.at(s.size() - 1) != '>')) {
    jud = false;
  }
  for (int i = 1; i < s.size() - 1; i++) {
    if (s.at(i) != '=') {
      jud = false;
    }
  }
  if (jud) {
    cout << "Yes";
  } else {
    cout << "No";
  }
}