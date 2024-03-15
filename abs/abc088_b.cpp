#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> card(N);
  int A = 0, B = 0;
  bool jud = true;
  int sum = 0;
  for (int i = 0; i < N; i++) {
    cin >> card.at(i);
  }
  sort(card.rbegin(), card.rend());
  for (int i = 0; i < N; i++) {
    if (jud) {
      A += card.at(i);
      jud = false;
    } else {
      B += card.at(i);
      jud = true;
    }
  }
  sum = (A - B);

  cout << sum;
}