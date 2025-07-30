#include <algorithm>
#include <iostream>
#include <map>
#include <vector>
using namespace std;
int n, m;
vector<int> v;

int main() {
  int temp, count = 0;
  cin >> n >> m;

  for (int i = 0; i < n; i++) {
    cin >> temp;
    v.push_back(temp);
  }
  sort(v.begin(), v.end());
  for (int i = 0; i < m; i++) {
    cin >> temp;
    if (binary_search(v.begin(), v.end(), temp)) {
      count++;
    }
  }

  cout << n + m - 2 * count;

  return 0;
}