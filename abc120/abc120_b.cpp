#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B, K;
  cin >> A >> B >> K;
  vector<int> vec;
  for (int i = 1; i < 1000; i++) {
    if ((A % i == 0) && (B % i == 0)) {
      vec.push_back(i);
    }
  }
  reverse(vec.begin(), vec.end());
  for (int i = 0; i < vec.size(); i++) {
    if (i == K - 1) {
      cout << vec.at(i) << endl;
      break;
    }
  }
}