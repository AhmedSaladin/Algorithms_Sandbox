/*
1- Know which digit to double.
2- Treating doubled numbers 10 and greater according to their individual digit.
3- Knowing we have reached the end of the number.
4- Reading each digit separately.
*/
#include <iostream>

using namespace std;

int doubleDigitValue(int digit);
void isValid(int &result);

int main() {
  char digit;
  int oddLengthCheckSum{0};
  int evenLengthCheckSum{0};
  int position{1};
  cout << "Enter a number: ";
  digit = cin.get();
  while (digit != 10) {

    if (position % 2 == 0) {
      oddLengthCheckSum += doubleDigitValue(digit - '0');
      evenLengthCheckSum += doubleDigitValue(digit - '0');
    } else {
      oddLengthCheckSum += digit - '0';
      evenLengthCheckSum += digit - '0';
    }
    digit = cin.get();
    position++;
  }
  int checkSum{0};
  if ((position - 1) % 2 == 0)
    checkSum = evenLengthCheckSum;
  else
    checkSum = oddLengthCheckSum;
  isValid(checkSum);
  return 0;
}

int doubleDigitValue(int digit) {
  int doubleDigit{digit * 2};
  int sum{0};
  if (doubleDigit >= 10)
    sum = 1 + (doubleDigit % 10);
  else
    sum = doubleDigit;
  return sum;
}

void isValid(int &result) {
  cout << "The result of summation is: " << result << endl;
  if (result % 10 == 0)
    cout << "The result is divisible by 10, Valid.\n";
  else
    cout << "The result is not divisible by 10, Invalid.\n";
}
