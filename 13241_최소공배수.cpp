#include <algorithm>
#include <iostream>
#include <map>
#include <vector>
using namespace std;
long long a, b;

long long gcd(long long a, long long b) {
  if (a < b) {
    long long temp = a;
    a = b;
    b = temp;
  }

  long long r;
  while (1) {
    if (a % b != 0) {
      r = a % b;
      a = b;
      b = r;
    }
    if (a % b == 0) {
      break;
    }
  }
  return b;
}

int main() {
  cin >> a >> b;

  cout << a * b / gcd(a, b);

  return 0;
}