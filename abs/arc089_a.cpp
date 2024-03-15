#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> t(N + 1);
  vector<int> x(N + 1);
  vector<int> y(N + 1);
  t.at(0) = x.at(0) = y.at(0) = 0;
  bool can = true;
  for (int i = 1; i <= N; i++) {
    cin >> t.at(i) >> x.at(i) >> y.at(i);
  }
  for (int i = 0; i < N; i++) {
    int dt = t.at(i + 1) - t.at(i);
    int dist = abs(x.at(i + 1) - x.at(i)) + abs(y.at(i + 1) - y.at(i));
    //cout << "dt:" << dt << "dist" << dist << endl;
    if (dist > dt || (dt % 2 != dist % 2)) {
      can = false;
    }
  }
  if (can) {
    cout << "Yes";
  } else {
    cout << "No";
  }
}