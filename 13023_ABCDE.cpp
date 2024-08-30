#include <math.h>

#include <algorithm>
#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;

#define MAX 2001
vector<int> graph[MAX];
int visited[MAX] = {
    0,
};

int result = 0;

int n, m;
void dfs(int node, int cnt) {
  if (cnt == 4) {
    result = 1;
    return;
  }

  for (int i = 0; i < graph[node].size(); i++) {
    int next_node = graph[node][i];
    if (!visited[next_node]) {
      visited[next_node] = 1;
      dfs(next_node, cnt + 1);
      visited[next_node] = 0;
    }
  }
}

int main() {
  cin >> n >> m;
  int person1, person2;
  for (int i = 0; i < m; i++) {
    cin >> person1 >> person2;
    graph[person1].push_back(person2);
    graph[person2].push_back(person1);
  }

  for (int i = 0; i < n; i++) {
    if (!visited[i]) {
      visited[i] = 1;
      dfs(i, 0);
      visited[i] = 0;
      if (result) {
        break;
      }
    }
  }

  cout << result;
  return 0;
}