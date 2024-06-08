#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N, M;
  cin >> N >> M;
  vector<int> A(M);
  vector<int> sum(M, 0);
  vector<vector<int>> B(N, vector<int>(M));
  rep(i, M) { cin >> A.at(i); }
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < M; j++) {
      cin >> B.at(i).at(j);
      sum.at(j) += B.at(i).at(j);
    }
  }

  for (int i = 0; i < M; i++) {
    if (sum.at(i) < A.at(i)) {
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
}
