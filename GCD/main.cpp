#include <iostream>

using namespace std;

int naiveGcd(int a, int b);
int euclidGCD(int a, int b);

int main()
{
  cout << naiveGcd(3918848,1653264) << endl;
  cout << euclidGCD(3918848,1653264) << endl;
  return 0;
}

int naiveGcd(int a, int b) {
  int best{0};
  for (int i = 1; i < a + b; i++) {
    if ((a % i == 0) && (b % i == 0))
      best = i;
  }
  return best;
}

int euclidGCD(int a, int b) {
  if (a == 0)
    return b;
  else
    return euclidGCD(b % a, a);
}
