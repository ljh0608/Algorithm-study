#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>
using namespace std;
long long a, b, c;
long long conquer(long long b) {
  if (b == 1) {
    return a;
  }

  if (b % 2 == 0) {
    return conquer(b / 2) % c * conquer(b / 2) % c;
  } else {
    return conquer(b / 2 + 1) % c * conquer(b / 2) % c;
  }
}

int main() {
  ios::sync_with_stdio(false);

  cin.tie(NULL);
  cout.tie(NULL);

  long long res = 1;
  cin >> a >> b >> c;

  cout << conquer(b) % c;

  return 0;
}