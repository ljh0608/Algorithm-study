#include <math.h>

#include <algorithm>
#include <cstdio>
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int n, m;
int board[1001][1001] = {
    0,
};
int result[1001][1001] = {
    0,
};

int visited[1001][1001] = {
    0,
};

queue<pair<int, int> > pq;
void bfs() {
  int dx[4] = {0, 0, -1, 1};
  int dy[4] = {1, -1, 0, 0};

  while (!pq.empty()) {
    int x = pq.front().first;
    int y = pq.front().second;
    pq.pop();

    for (int i = 0; i < 4; i++) {
      int nextX = x + dx[i];
      int nextY = y + dy[i];

      if (nextX < 0 || nextX >= n || nextY < 0 || nextY >= m) {
        continue;
      }

      if (board[nextX][nextY] == 1 && !visited[nextX][nextY]) {
        visited[nextX][nextY] = 1;
        result[nextX][nextY] = result[x][y] + 1;
        pq.push(make_pair(nextX, nextY));
      }
    }
  }
}
int main() {
  cin >> n >> m;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> board[i][j];
      if (board[i][j] == 2) {
        pq.push(make_pair(i, j));
      }
    }
  }

  bfs();

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (result[i][j] == 0 && board[i][j] == 1) {
        cout << -1 << " ";
      } else {
        cout << result[i][j] << " ";
      }
    }
    cout << "\n";
  }

  return 0;
}