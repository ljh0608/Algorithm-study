#include <math.h>

#include <algorithm>
#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;

long long le9 = 1000000009;
long long dp[100001][4] = {
    0,
};

void printRes() {
  dp[1][1] = 1;
  dp[1][2] = 0;
  dp[1][3] = 0;

  dp[2][1] = 0;
  dp[2][2] = 1;
  dp[2][3] = 0;

  dp[3][1] = 1;
  dp[3][2] = 1;
  dp[3][3] = 1;

  for (int i = 4; i < 100001; i++) {
    dp[i][1] = (dp[i - 1][2] + dp[i - 1][3]) % le9;
    dp[i][2] = (dp[i - 2][3] + dp[i - 2][1]) % le9;
    dp[i][3] = (dp[i - 3][1] + dp[i - 3][2]) % le9;
  }
}
int main() {
  int t, n;

  cin >> t;
  printRes();
  for (int i = 0; i < t; i++) {
    int num;
    cin >> num;
    long long result = (dp[num][1] + dp[num][2] + dp[num][3]) % le9;
    cout << result << "\n";
  }
  return 0;
}