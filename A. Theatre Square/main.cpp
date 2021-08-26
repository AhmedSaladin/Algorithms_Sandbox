#include <bits/stdc++.h>
using namespace std;

int main()
{
  double n, m, a;
  cin >> n >> m >> a;
  int w = ceil(n / a);
  int h = ceil(m / a);
  long long result = w * 1LL * h;
  cout << result;
  return 0;
}