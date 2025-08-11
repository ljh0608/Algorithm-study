#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

long long dp[101][11];

long long recur(int digit, int val) {
  if (digit == 1) {
    return dp[digit][val];
  }

  if (!dp[digit][val]) {
    if (val == 0) {
      dp[digit][val] = recur(digit - 1, 1);

    }

    else if (val == 9) {
      dp[digit][val] = recur(digit - 1, 8);

    } else {
      // dp[digit][val] = dp[digit - 1][val - 1] + dp[digit][val + 1];
      dp[digit][val] = recur(digit - 1, val - 1) + recur(digit - 1, val + 1);
    }
  }

  return dp[digit][val] % 1000000000;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  long long res = 0;
  int n;

  cin >> n;

  for (int i = 1; i < 10; i++) {
    dp[1][i] = 1;
  }

  dp[1][0] = 0;

  for (int i = 0; i < 10; i++) {
    res += recur(n, i) % 1000000000;
  }

  cout << res % 1000000000;
  return 0;
}
