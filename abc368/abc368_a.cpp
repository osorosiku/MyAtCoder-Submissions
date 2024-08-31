#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int n, k;
  cin >> n >> k;
  vector<int> cards(n);
  rep(i, n) cin >> cards[i];
  vector<int> result;
  for (int i = n - k; i < n; i++) {
    result.push_back(cards[i]);
  }
  for (int i = 0; i < n - k; i++) {
    result.push_back(cards[i]);
  }

    for (int i = 0; i < n; i++) {
    cout << result[i] << " ";
  }
}