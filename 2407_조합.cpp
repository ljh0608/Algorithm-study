#include <math.h>

#include <algorithm>
#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;

string dp[102][102];
void bigIntAdd(string n1, string n2, int i, int j) {
  int sum = 0;

  while (sum || !n1.empty() || !n2.empty()) {
    if (!n1.empty()) {
      sum += n1.back() - '0';
      n1.pop_back();
    }
    if (!n2.empty()) {
      sum += n2.back() - '0';
      n2.pop_back();
    }

    dp[i][j].push_back((sum % 10) + '0');
    sum /= 10;
  }

  return;
}
int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n, m;
  cin >> n >> m;
  for (int i = 1; i <= n; i++) {
    for (int j = 0; j <= i; j++) {
      if (j == 0 || j == i) {
        dp[i][j] = "1";
      } else {
        string n1 = dp[i - 1][j - 1];
        string n2 = dp[i - 1][j];
        bigIntAdd(n1, n2, i, j);
        reverse(dp[i][j].begin(), dp[i][j].end());
      }
    }
  }

  cout << dp[n][m];
  return 0;
}