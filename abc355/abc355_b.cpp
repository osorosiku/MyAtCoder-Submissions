#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  vector<int> A(N);
  vector<int> B(M);
  vector<int> ans;
  bool jud = false;

  for (int i = 0; i < N; i++) {
    cin >> A.at(i);
    ans.push_back(A.at(i));
  }
  for (int i = 0; i < M; i++) {
    cin >> B.at(i);
    ans.push_back(B.at(i));
  }

  sort(ans.begin(), ans.end());

  for (int i = 0; i < ans.size() - 1; i++) {
    if (find(A.begin(), A.end(), ans.at(i)) != A.end() &&
        find(A.begin(), A.end(), ans.at(i + 1)) != A.end()) {
      jud = true;
      break;
    }
  }

  if (jud) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}
