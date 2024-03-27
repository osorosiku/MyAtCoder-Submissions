#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  bool res = false;
  for (int i = 0; i < 18; i++) {
    s += "wbwbwwbwbwbw";
  }
  int W, B;
  cin >> W >> B;
  int sum = W + B;
  for (int i = 0; i < s.size() - sum; i++) {
    string t = s.substr(i, sum);
    int con = count(t.begin(), t.end(), 'w');
    if (con == W) {
      res = true;
      //  cout << t << endl;
    }
  }
  if (res) {
    cout << "Yes";
  } else {
    cout << "No";
  }
}