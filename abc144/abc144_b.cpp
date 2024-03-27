#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  bool jud = false;
  for (int i = 0; i <= 9; i++) {
    for (int j = 0; j <= 9; j++) {
      int sum = i * j;
      if (sum == N) {
        jud = true;
      }
    }
  }
  if (jud) {
    cout << "Yes";
  } else {
    cout << "No";
  }
}