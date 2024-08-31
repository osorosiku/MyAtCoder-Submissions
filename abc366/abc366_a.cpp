#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int n, t, a;
  cin >> n >> t >> a;
  int dif = abs(t - a);
  if (dif > (n - (t + a))) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}
