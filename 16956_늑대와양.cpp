#include <math.h>

#include <algorithm>
#include <cstdio>
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

char RC[500][500];
char res[500][500];

int r, c;

int boolResult = 1;

queue<pair<int, int> > qp;
int dx[4] = {0, 0, -1, 1};
int dy[4] = {1, -1, 0, 0};
void tracking(int x, int y) {
  for (int i = 0; i < 4; i++) {
    int rx = x + dx[i];
    int ry = y + dy[i];

    if (rx < 0 || rx >= r || ry < 0 || ry >= c) {
      continue;
    }

    if (RC[rx][ry] == '.') {
      res[rx][ry] = 'D';

    } else if (RC[rx][ry] == 'S') {
      boolResult = 0;
    } else {
      continue;
    }
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  cin >> r >> c;
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      char temp;
      cin >> temp;

      RC[i][j] = temp;
      res[i][j] = temp;
      if (temp == 'W') {
        qp.push(make_pair(i, j));
      }
    }
  }
  while (!qp.empty()) {
    int x = qp.front().first;
    int y = qp.front().second;
    qp.pop();

    tracking(x, y);
  }

  cout << boolResult << "\n";

  if (boolResult) {
    for (int i = 0; i < r; i++) {
      for (int j = 0; j < c; j++) {
        cout << res[i][j];
      }
      cout << "\n";
    }
  }

  return 0;
}