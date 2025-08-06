#include <algorithm>
#include <iostream>
#include <map>
#include <vector>
using namespace std;

vector<vector<int> > v2;
// 0은 노방문 1은 방문 2는 고정
int board[15];
int n;
int cnt = 0;

int verification(int cdx) {
  for (int i = 0; i < cdx; i++) {
    if (board[cdx] == board[i] || abs(board[cdx] - board[i]) == abs(cdx - i)) {
      return 0;
    }
  }

  return 1;
}

void placeQueen(int cdx) {
  if (cdx == n) {
    cnt++;
    return;
  }

  for (int i = 0; i < n; i++) {
    board[cdx] = i;
    if (verification(cdx)) {
      placeQueen(cdx + 1);
    }
  }
}

int main() {
  cin >> n;

  placeQueen(0);
  cout << cnt;
  return 0;
}