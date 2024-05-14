#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  string s, t;
  cin >> s >> t;
  vector<int> ind;
  // ２重for文を作成
  int j = 0;
  for (int i = 0; i < t.size(); i++) {
    if (s.at(j) == t.at(i)) {
      ind.push_back(i);
      j++;
      continue;
    }
  }
  // indの中身を空白区切りで出力
  rep(i, ind.size()) { cout << ind.at(i) + 1 << " "; }
  cout << endl;
}