#include <algorithm>
#include <iostream>
#include <map>
#include <vector>
using namespace std;

int n, m;
vector<int> ans;

void func(int start, int n, int m) {
  if (ans.size() == m) {
    for (int i = 0; i < ans.size(); i++) {
      cout << ans[i] << " ";
    }
    cout << "\n";
    return;
  }

  else {
    for (int i = start; i <= n; i++) {
      ans.push_back(i);
      func(i + 1, n, m);
      ans.pop_back();
    }
  }
}

int main() {
  cin >> n >> m;

  func(1, n, m);

  return 0;
}
