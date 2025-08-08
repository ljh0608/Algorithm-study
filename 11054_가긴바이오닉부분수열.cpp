#include <math.h>

#include <algorithm>
#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;
vector<int> v;

int dpPlus[1001] = {
    0,
};
int dpMinus[1001] = {
    0,
};
int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n;
  int temp;
  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> temp;
    v.push_back(temp);
  }

  fill_n(dpPlus, 1001, 1);
  fill_n(dpMinus, 1001, 1);
  for (int i = 0; i < n - 1; i++) {
    for (int j = i + 1; j < n; j++) {
      if (v[i] < v[j]) {
        dpPlus[j] = max(dpPlus[i] + 1, dpPlus[j]);
      }
    }
  }
  for (int i = n - 1; i >= 0; i--) {
    for (int j = i + 1; j < n; j++) {
      if (v[i] > v[j]) {
        dpMinus[i] = max(dpMinus[j] + 1, dpMinus[i]);
      }
    }
  }

  int ans = 0;
  for (int i = 0; i < n; i++) {
    // cout << dpPlus[i] << " " << dpMinus[i] << "\n";
    ans = max(ans, dpMinus[i] + dpPlus[i]);
  }

  cout << ans - 1;
  return 0;
}