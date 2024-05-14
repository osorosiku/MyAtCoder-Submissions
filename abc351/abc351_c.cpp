#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> balls(N + 1);
  for (int i = 1; i <= N; i++) {
    cin >> balls.at(i);
  }
  vector<int> qa;
  for (int i = 1; i <= N; i++) {
    qa.push_back(balls.at(i));
    while (true) {
      if (qa.size() <= 1) {
        break;
        // cout << "fewEnd" << endl;
      }
      int ind = qa.size() - 1;
      if (qa.at(ind) != qa.at(ind - 1)) {
        break;
        // cout << "conppyEnd" << endl;
      } else {

        int sum = qa.at(ind) + 1;
        qa.pop_back();
        qa.pop_back();
        qa.push_back(sum);
      }
    }
  }
  cout << qa.size();
}
