#include <bits/stdc++.h>
using namespace std;

int main()
{
  string s;
  cin >> s;
  int con = 0;
  for (int i = 0; i < s.size(); i++) {
    if (s.at(i) == '|') {
      con++;
    }
    if ((con == 0 || con == 2 && s.at(i) != '|')) {
      cout << s.at(i);
    }
  }
}