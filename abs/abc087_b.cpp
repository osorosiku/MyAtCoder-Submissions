#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B, C;
  cin >> A >> B >> C;
  int X;
  cin >> X;
  int count = 0;
  for (int i = 0; i <= A; i++) {
    for (int j = 0; j <= B; j++) {
      for (int k = 0; k <= C; k++) {
        int sum = 0;
        sum = i * 500 + j * 100 + k * 50;
        if (sum == X) {
          count++;
        }
      }
    }
  }
  cout << count;
}