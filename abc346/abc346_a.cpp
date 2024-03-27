#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> vec(N);
  for (int i = 0; i < N; i++) {
    cin >> vec.at(i);
  }
  vector<int> B;
  for (int i = 0; i < N - 1; i++) {
    int sum = vec.at(i) * vec.at(i + 1);
    B.push_back(sum);
  }
  for (int x : B) {
    cout << x << " ";
  }
}