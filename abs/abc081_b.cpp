#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> vec(N);
  int count = 0;
  bool jud = true;

  for (int i = 0; i < N; i++) {
    cin >> vec.at(i);
  }

  while (jud) {
    for (int i = 0; i < N; i++) {
      if (vec.at(i) % 2 != 0) {
        jud = false;
        break;
      } else {
        vec.at(i) = vec.at(i) / 2;
        if (i == N - 1) {
          count++;
          //  cout << "count++" << i << ":" << vec.at(i) << endl;
        }
      }
    }
  }

  cout << count;
}
