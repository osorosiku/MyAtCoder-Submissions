#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<string> a(N);
  vector<string> b(N);
  for (int i = 0; i < N; i++) {
    cin >> a.at(i);
  }
  for (int i = 0; i < N; i++) {
    cin >> b.at(i);
  }
  for (int i = 0; i < N; i++) {
    if (a.at(i) != b.at(i)) {
      string A = a.at(i);
      string B = b.at(i);
      for (int j = 0; j < N; j++) {
        if (A.at(j) != B.at(j)) {
          cout << i + 1 << " " << j + 1 << endl;
        }
      }
    }
  }
}
