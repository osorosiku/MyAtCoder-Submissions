#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N, L, R;
  cin >> N >> L >> R;
  vector<int> A;
  for (int i = 1; i <= N; i++) {
    A.push_back(i);
  }
  reverse(A.begin() + L - 1, A.begin() + R);
  for (int x : A) {
    cout << x << " ";
  }
}

