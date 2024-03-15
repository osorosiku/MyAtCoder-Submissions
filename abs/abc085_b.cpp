#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  set<int> set;
  int sv;
  for (int i = 0; i < N; i++) {
    cin >> sv;
    set.insert(sv);
  }
  cout << set.size();
}