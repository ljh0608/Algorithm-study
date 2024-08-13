#include <math.h>

#include <algorithm>
#include <cstdio>
#include <iostream>
#include <vector>

using namespace std;

int N;
double arr[10001];
double result[10001];
double maxnum = 0;
int main() {
  cin >> N;

  for (int i = 0; i < N; i++) {
    cin >> arr[i];
  }
  result[0] = arr[0];
  maxnum = result[0];
  for (int i = 1; i < N; i++) {
    result[i] = max(result[i - 1] * arr[i], arr[i]);
    maxnum = max(maxnum, double(result[i]));
  }

  cout << fixed;
  cout.precision(3);

  cout << maxnum;
  return 0;
}