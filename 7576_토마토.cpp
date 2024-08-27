#include <math.h>

#include <algorithm>
#include <cstdio>
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

#define MAX 1001
#define DIST_MAX 100001
queue<pair<int, int> > q;
int dist[1002][1002];
int board[1002][1002];
int visited[1002][1002] = {
    0,
};

int m, n;
int res = 0;
int isTomato = 0;
void bfs() {
  while (!q.empty()) {
    int dx[4] = {0, 0, -1, 1};
    int dy[4] = {1, -1, 0, 0};

    int x = q.front().first;
    int y = q.front().second;
    q.pop();
    visited[x][y] = 1;

    for (int i = 0; i < 4; i++) {
      int nextX = x + dx[i];
      int nextY = y + dy[i];

      if (nextX >= m || nextX < 0 || nextY >= n || nextY < 0) {
        continue;
      }

      if (visited[nextX][nextY]) {
        continue;
      }

      if (board[nextX][nextY] == -1 || board[nextX][nextY] == 1) {
        visited[nextX][nextY] = 1;
        continue;
      }
      visited[nextX][nextY] = 1;

      q.push(make_pair(nextX, nextY));

      dist[nextX][nextY] = dist[x][y] + 1;
      res = max(res, dist[nextX][nextY]);
    }
  }
}

int main() {
  // memset(dist, 100000, sizeof(dist));
  fill(&dist[0][0], &dist[1000][1000], 0);

  cin >> n >> m;
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      cin >> board[i][j];
    }
  }

  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      if (board[i][j] == 1) {
        q.push(make_pair(i, j));
      }
      if (board[i][j] == 0) {
        isTomato = 1;
      }
    }
  }

  if (!isTomato) {
    cout << 0;
    return 0;
  }

  bfs();

  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      if (board[i][j] == 0 && dist[i][j] == 0) {
        cout << -1;
        return 0;
      }
    }
  }

  cout << res;

  return 0;
}