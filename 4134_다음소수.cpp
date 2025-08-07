#include <algorithm>
#include <cmath>
#include <iostream>
#include <map>
#include <vector>
using namespace std;

vector<bool> v;

int isPrime(long long num) {
  if (num == 0 || num == 1) {
    return 0;
  }
  for (long long i = 2; i <= sqrt(num); i++) {
    if (num % i == 0) {
      return 0;
    }
  }

  return 1;
};

int main() {
  long long targetNum = 4 * pow(10, 9);
  int n;
  long long temp;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> temp;

    while (!isPrime(temp)) {
      temp++;
    }
    cout << temp << "\n";
  }
}
