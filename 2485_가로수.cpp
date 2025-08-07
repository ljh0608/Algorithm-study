#include <algorithm>
#include <iostream>
#include <map>
#include <vector>
using namespace std;

int n;
vector<int> v;

int gcd(int a, int b) {
  while (1) {
    if (a % b == 0) {
      break;
    }
    int temp = a;
    a = b;
    b = temp % b;
  }

  return b;
}

int main() {
  int temp;
  int res;
  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> temp;
    v.push_back(temp);
  }

  res = gcd(v[1] - v[0], v[2] - v[1]);

  for (int i = 1; i < n - 1; i++) {
    res = gcd(res, v[i + 1] - v[i]);
  }

  cout << (v[n - 1] - v[0]) / res + 1 - v.size();

  return 0;
}