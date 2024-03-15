#include <bits/stdc++.h>
using namespace std;

int main() {
  int ans = 0;
  int sum = 0;
  int req = 0;
  set<int> st;
  bool jud = false;
  int N;
  cin >> N;
  vector<int> A(N);
  for (int i = 0; i < N; i++) {
    cin >> A.at(i);
  }

  int M;
  cin >> M;
  vector<int> B(M);
  for (int i = 0; i < M; i++) {
    cin >> B.at(i);
  }

  int L;
  cin >> L;
  vector<int> C(L);
  for (int i = 0; i < L; i++) {
    cin >> C.at(i);
  }

  int Q;
  cin >> Q;
  vector<int> X(Q);
  for (int i = 0; i < Q; i++) {
    cin >> X.at(i);
  }

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < M; j++) {
      for (int k = 0; k < L; k++) {
        sum = A.at(i) + B.at(j) + C.at(k);
        st.insert(sum);
      }
    }
  }
  for (int i = 0; i < Q; i++) {
    if (st.find(X.at(i)) != st.end()) {
      cout << "Yes" << endl;
    } else {
      cout << "No" << endl;
    }
  }
}
