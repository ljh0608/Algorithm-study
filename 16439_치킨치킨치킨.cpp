#include <algorithm>
#include <cstdio>
#include <iostream>
#include <vector>

using namespace std;

vector<vector<int> > v;
bool visited[30] = {
    false,
};
int final_result = 0;
int n, m;
void permutation(int start, int depth) {
  if (depth == 3) {
    int result = 0;
    for (int i = 0; i < n; i++) {
      int temp = 0;
      for (int j = 0; j < m; j++) {
        if (visited[j]) {
          temp = max(temp, v[i][j]);
        }
      }
      result += temp;
    }
    final_result = max(result, final_result);
    return;
  }

  for (int i = start; i < m; i++) {
    if (visited[i]) {
      continue;
    }
    visited[i] = true;
    permutation(i + 1, depth + 1);
    visited[i] = false;
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  cin >> n >> m;
  v.resize(n, vector<int>(m));
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> v[i][j];
    }
  }

  permutation(0, 0);

  cout << final_result;

  return 0;
}
