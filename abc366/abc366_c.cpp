#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int q;
  cin >> q;
  vector<pair<int, int>> qu(q);
  map<int, int> balls;
  for (int i = 0; i < q; i++) {
    int x;
    cin >> x;
    if (x != 3) {
      int y;
      cin >> y;
      qu[i] = make_pair(x, y);
    } else {
      qu[i] = make_pair(x, -1);
    }
  }
  for (int i = 0; i < q; i++) {
    if (qu[i].first == 1) {
      balls[qu[i].second]++;
    }
    if (qu[i].first == 2) {
      balls[qu[i].second]--;
      if (balls[qu[i].second] == 0) {
        balls.erase(qu[i].second);
      }
    }
    if (qu[i].first == 3) {
      cout << balls.size() << endl;
    }
  }
}