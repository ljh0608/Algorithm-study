#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

void hanoi(int n, int a, int b, int c) {
  if (n == 1) {
    cout << a << " " << c << "\n";
    return;
  }

  else {
    hanoi(n - 1, a, c, b);
    hanoi(1, a, b, c);
    hanoi(n - 1, b, a, c);
  }
}
int main() {
  int n;
  cin >> n;

  cout << (int)pow(2, n) - 1 << "\n";
  hanoi(n, 1, 2, 3);
  return 0;
}
