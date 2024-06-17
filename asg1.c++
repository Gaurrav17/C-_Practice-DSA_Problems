#include <iostream>

using namespace std;

int sumOfTwoDigits(int firstDigit, int secondDigit) {
  return firstDigit + secondDigit;
}

int main() {
  int a, b;

  cout << "Enter two digits separated by space: ";
  cin >> a >> b;

  cout << "The sum of " << a << " and " << b << " is: " << sumOfTwoDigits(a, b) << endl;

  return 0;
}