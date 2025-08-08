#include <math.h>

#include <algorithm>
#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;

int cost[100001];
int dist[100000];
long long currentCost;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n;
  cin >> n;

  for (int i = 0; i < n - 1; i++) {
    cin >> dist[i];
  }

  for (int i = 0; i < n; i++) {
    cin >> cost[i];
  }

  currentCost = cost[0];
  long long ans = cost[0] * dist[0];
  for (int i = 1; i < n; i++) {
    if (currentCost < cost[i]) {
      ans += currentCost * dist[i];

    } else {
      ans += cost[i] * dist[i];
      currentCost = cost[i];
    }
  }

  cout << ans;

  return 0;
}