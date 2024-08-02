#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int h, w, sx, sy;
  cin >> h >> w >> sx >> sy;
  vector<int> n = {sx-1, sy-1};  
  vector<vector<char>> grid(h, vector<char>(w));
  string x;
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      cin >> grid[i][j];
    }
  }
  cin >> x;
  
  for (int i = 0; i < x.size(); i++) {
    if (x.at(i) == 'L') {
      if (n[1] > 0 && grid[n[0]][n[1]-1] == '.') {
        n[1]--;
      }
    }
    if (x.at(i) == 'R') {
      if (n[1] < w-1 && grid[n[0]][n[1]+1] == '.') {
        n[1]++;
      }
    }
    if (x.at(i) == 'U') {
      if (n[0] > 0 && grid[n[0]-1][n[1]] == '.') {
        n[0]--;
      }
    }
    if (x.at(i) == 'D') {
      if (n[0] < h-1 && grid[n[0]+1][n[1]] == '.') {
        n[0]++;
      }
    }
  }
  cout << n[0]+1 << " " << n[1]+1;  
  cout << endl;
}
