#include <math.h>

#include <algorithm>
#include <cstdio>
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

#define MAX 100001
int res = MAX;

int n, k;

bool visited[MAX] = {
    false,
};

priority_queue<pair<int, int>, vector<pair<int, int> >,
               greater<pair<int, int> > >
    pq;

void bfs() {
  while (!pq.empty()) {
    int time = pq.top().first;
    int x = pq.top().second;

    pq.pop();
    visited[x] = true;

    if (x == k) {
      res = min(res, time);
      break;
    }

    if (x - 1 >= 0 && !visited[x - 1]) {
      pq.push(make_pair(time + 1, x - 1));
    }
    if (x + 1 < MAX && !visited[x + 1]) {
      pq.push(make_pair(time + 1, x + 1));
    }
    if (2 * x < MAX && !visited[2 * x]) {
      pq.push(make_pair(time, x * 2));
    }
  }
  return;
}

int main() {
  cin >> n >> k;

  pq.push(make_pair(0, n));

  bfs();
  cout << res;
}