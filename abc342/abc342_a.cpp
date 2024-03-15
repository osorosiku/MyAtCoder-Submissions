#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  int siz = s.size();
  int con = 0;
  for (int i = 1; i < siz - 1; i++) {
    if (s.at(i - 1) != s.at(i) && s.at(i - 1) != s.at(i + 1)) {
      con = i;
      break;
    } else if (s.at(i - 1) != s.at(i)) {
      con = i + 1;
      break;
    } else if (s.at(i - 1) != s.at(i + 1)) {
      con = i + 2;
    }
  }
  cout << con;
}