#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> a(9);
  vector<int> b(8);
  int sumA = 0, sumB = 0;
  int ans = 0;
  for (int i = 0; i < a.size(); i++) {
    cin >> a.at(i);
  }
  for (int i = 0; i < b.size(); i++) {
    cin >> b.at(i);
  }
  for (int x : a) {
    sumA += x;
  }
  for (int x : b) {
    sumB += x;
  }

  if (sumA > sumB) {
    ans = sumA - sumB + 1;
  } else if (sumA == sumB) {
    ans = 1;
  } else {
    ans = 0;
  }
  cout << ans;
}