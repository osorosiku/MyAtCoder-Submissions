#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, Y;
  cin >> N >> Y;
  int sum = 0;
  int res_i = -1, res_j = -1, res_k = -1;

  for (int i = 0; i <= N; i++) {
    for (int j = 0; j + i <= N; j++) {
      int k = N - i - j;
      sum = (i * 10000) + (j * 5000) + (k * 1000);
      if (sum == Y) {
        res_i = i;
        res_j = j;
        res_k = k;
        goto end_of_loops;
      }
    }
  }

end_of_loops:

  cout << res_i << " " << res_j << " " << res_k << endl;
}
