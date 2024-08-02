#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int n;
  cin >> n;
  vector<string> vec(n);
  rep(i, n) cin >> vec.at(i);
  bool rs = true;
  for (int i = 1; i < n; i++) {
    if (vec.at(i) == vec.at(i - 1) && vec.at(i) == "sweet") {
      if(i != n-1){
      
      rs = false;
      break;
    }
    }
  }
  if (rs) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}