#include <algorithm>
#include <iostream>
#include <map>
#include <vector>
using namespace std;

int gcd(int a, int b) {
  while (a % b != 0) {
    int temp;
    temp = a % b;
    a = b;
    b = temp;
  }
  return b;
}

int main() {
  int a, b;
  int c, d;
  int tempA, tempB;

  cin >> a >> b;
  cin >> c >> d;

  int lcm = b * d / gcd(b, d);

  tempA = a * (lcm / b) + c * (lcm / d);
  tempB = lcm;

  int tempGcd = gcd(tempA, tempB);

  if (tempGcd > 1) {
    cout << tempA / tempGcd << " " << tempB / tempGcd;
  } else {
    cout << tempA << " " << tempB;
  }
  return 0;
}