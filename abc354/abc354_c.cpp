#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N;
  cin >> N;
  vector<vector<int>> cards(N, vector<int>(3));
  vector<int> ans;
  rep(i, N) {
    int a, c;
    cin >> a >> c;
    cards.at(i) = {i, a, c};
  }

  sort(cards.rbegin(), cards.rend(),
       [](const vector<int> &a, const vector<int> &b) { return a[1] < b[1]; });

  int v = 0;
  for (int i = 0; i < N; i++) {
    // cout << "i:" << i << "ans.back():" << cards.at(ind)[2] << endl;
    if (cards.at(i).at(2) < v || ans.size() == 0) {
      ans.push_back(cards.at(i).at(0) + 1);
      v = cards.at(i).at(2);
    }
  }
  sort(ans.begin(), ans.end());
  cout << ans.size() << endl;
  for (auto a : ans) {
    cout << a << " ";
  }
}