#include <algorithm>
#include <cmath>
#include <iostream>
#include <map>
#include <vector>
using namespace std;

int isPrime(int num) {
  if (num == 0 || num == 1) {
    return 0;
  }
  for (int i = 2; i <= sqrt(num); i++) {
    if (num % i == 0) {
      return 0;
    }
  }
  return 1;
}

int main() {
  int n, m;

  cin >> n >> m;

  for (int i = n; i <= m; i++) {
    if (isPrime(i)) {
      cout << i << "\n";
    }
  }

  return 0;
}