#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N;
  cin >> N;
  int sum = 0;
  vector<int> A(N - 1);
  rep(i, N - 1) cin >> A.at(i);
  rep(i, N - 1) sum += A.at(i);
  cout << -sum;
}