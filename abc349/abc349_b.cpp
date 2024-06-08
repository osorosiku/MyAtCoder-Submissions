#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  string s;
  cin >> s;
  map<char, int> mp;
  map<int, int> cnt;
  for (auto c : s) mp[c]++;
  for (auto p : mp) cnt[p.second]++;
  for (auto x : cnt) {
    if (x.second != 2) {
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
}