#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N;
  cin >> N;
  map<string, int> mp;
  int sum = 0;
  for (int i = 0; i < N; i++) {
    string s;
    int x;
    cin >> s >> x;
    mp[s] = x;
  }
  for (auto& x : mp) {
    sum += x.second;
  }
  int ind = sum % N;

  auto it = mp.begin();
  advance(it, ind);

  if (it != mp.end()) {
    cout << it->first << endl;
  }
}