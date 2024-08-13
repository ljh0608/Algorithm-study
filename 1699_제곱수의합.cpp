#include <math.h>

#include <algorithm>
#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;

vector<int> dp(1000001);
// sqrt
int sqrtSum(int num) {
  int res = 0;
  int temp = num;
  while (temp) {
    temp -= dp[int(sqrt(num))];
    res++;
  }

  return res;
}

int main() {
  int n;
  cin >> n;
  dp[0] = 1;
  dp[1] = 1;
  dp[2] = 2;
  dp[3] = 3;
  for (int i = 4; i < n + 1; i++) {
    int root = int(sqrt(i));
    int root2 = pow(root, 2);

    if (root2 != i) {
      dp[i] = dp[i - 1] + 1;

      for (int j = 1; j < sqrt(i); j++) {
        dp[i] = min(dp[i], 1 + dp[i - pow(j, 2)]);
      }
    } else {
      dp[i] = 1;
    }
  }

  cout << dp[n];

  return 0;
}