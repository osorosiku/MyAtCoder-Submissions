#include <bits/stdc++.h>
using namespace std;

int fun(int x, int y, vector<int> t) {
  int indX = -1, indY = -1;
  for (int i = 0; i < t.size(); i++) {
    if (t.at(i) == x) {
      indX = i;
    } else if (t.at(i) == y) {
      indY = i;
    }
  }
  if (indX < indY) {
    // cout << "indX:" << indX << endl;
    // cout << "indY:" << indY << endl;
    return (t.at(indX));
  } else {
    //  cout << "indY:" << indY << endl;
    // cout << "indX:" << indX << endl;
    return (t.at(indY));
  }
}

int main() {
  int N;
  cin >> N;
  vector<int> s(N);
  for (int i = 0; i < N; i++) {
    cin >> s.at(i);
  }
  int Q;
  cin >> Q;
  int con = 0;
  vector<int> vec(Q * 2);
  for (int i = 0; i < (Q * 2); i++) {
    cin >> vec.at(i);
    // cout << vec.at(i) << endl;
  }
  for (int i = 0; i < Q * 2; i += 2) {
    con++;
    if (con > Q) {
      break;
    }
    // cout << vec.at(i) << "::" << vec.at(i + 1) << endl;
    cout << fun(vec.at(i), vec.at(i + 1), s) << endl;
  }
}