#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n;
  long long temp;
  vector<long long> v;
  vector<long long> ans;

  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> temp;
    v.push_back(temp);
    ans.push_back(temp);
  }

  sort(ans.begin(), ans.end());

  ans.erase(unique(ans.begin(), ans.end()), ans.end());

  for (int i = 0; i < v.size(); i++) {
    cout << lower_bound(ans.begin(), ans.end(), v[i]) - ans.begin() << " ";
  }
  return 0;
}