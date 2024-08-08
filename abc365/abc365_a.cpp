#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int ans = 0;
  if (n % 4 != 0)
  {
    ans = 365;
  }
  else if (n % 100 != 0)
  {
    ans = 366;
  }
  else if (n % 400 != 0)
  {
    ans = 365;
  }
  else
  {
    ans = 366;
  }
  cout << ans << endl;
}