#include <math.h>

#include <algorithm>
#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;

vector<pair<int, int> > vp;
int c, n;
int result = 0;
#define MAX_DP 100001

int dp[MAX_DP] = {
    // 비용으로 얻을 수 있는 회원 수 DP
    0,
};

int main() {
  cin >> c >> n;

  for (int i = 0; i < n; i++) {
    int cost, person;
    cin >> cost >> person;

    vp.push_back(make_pair(cost, person));
  }

  for (int i = 0; i < MAX_DP; i++) {
    for (int j = 0; j < n; j++) {
      int index = i - vp[j].first;
      if (index < 0) {
        continue;
      }
      dp[i] = max(dp[i], dp[index] + vp[j].second);
    }

    if (dp[i] >= c) {
      cout << i;
      break;
    }
  }

  return 0;
}