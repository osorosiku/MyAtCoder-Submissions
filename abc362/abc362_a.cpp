#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  vector<pair<int, string>> pen(3);
  int r, g, b;
  cin >> r >> g >> b;
  pen[0] = make_pair(r, "Red");
  pen[1] = make_pair(g, "Green");
  pen[2] = make_pair(b, "Blue");
  sort(pen.begin(), pen.end());
  string c;
  cin >> c;
  auto it = remove_if(pen.begin(), pen.end(), [&c](const pair<int, string>& p) {
    return p.second == c;
  });
  pen.erase(it, pen.end());
  cout << pen[0].first << endl;
}