#include <iostream>
using namespace std;
long long fibRecurs(int n);
long long fibList(int n);
long long fibFix(int n);


int main() {
  cout << fibList(1000) << endl;
  cout << fibFix(1000) << endl;
  cout << fibRecurs(40) << endl;
  return 0;
}

long long fibRecurs(int n) {
  if (n <= 1)
    return n;
  else
    return fibRecurs(n - 1) + fibRecurs(n - 2);
}

long long fibList(int n) {
  long long arr[n + 1];
  arr[0] = 0;
  arr[1] = 1;
  for (int i = 2; i <= n; i++) {
    arr[i] = arr[i - 1] + arr[i - 2];
  }
  return arr[n];
}

long long fibFix(int n) {
  long long a = 0, b = 1, c;
  if (n == 0)
    return 0;
  else {
    for (int i = 2; i <= n; i++) {
      c = a + b;
      a = b;
      b = c;
    }
    return b;
  }
}
