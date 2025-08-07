#include <algorithm>
#include <iostream>
#include <map>
#include <vector>
using namespace std;

vector<pair<int, int> > blank;
int board[11][11] = {
    0,
};
int len = 0;
int checkIsRowNum[9][10] = {
    0,
};
int checkIsColNum[9][10] = {
    0,
};

bool checkIsNearNum(int i, int j, int value) {
  int startI = i / 3;
  int startJ = j / 3;
  startI *= 3;
  startJ *= 3;

  for (int a = startI; a < startI + 3; a++) {
    for (int b = startJ; b < startJ + 3; b++) {
      if (board[a][b] == value) {
        return false;
      }
    }
  }
  return true;
}

void backTracking(int n) {
  if (n == len) {
    for (int i = 0; i < 9; i++) {
      for (int j = 0; j < 9; j++) {
        cout << board[i][j] << " ";
      }
      cout << "\n";
    }
    exit(0);
  }

  int i = blank[n].first;
  int j = blank[n].second;
  if (board[i][j] == 0) {
    for (int a = 1; a <= 9; a++) {
      if (checkIsColNum[j][a] == 0 && checkIsRowNum[i][a] == 0 &&
          checkIsNearNum(i, j, a)) {
        board[i][j] = a;
        checkIsColNum[j][a] = 1;
        checkIsRowNum[i][a] = 1;
        backTracking(n + 1);
        board[i][j] = 0;
        checkIsColNum[j][a] = 0;
        checkIsRowNum[i][a] = 0;
      }
    }
  }
  return;
}

int main() {
  int temp;
  for (int i = 0; i < 9; i++) {
    for (int j = 0; j < 9; j++) {
      cin >> board[i][j];
      if (board[i][j] == 0) {
        blank.push_back(make_pair(i, j));
        len++;
      } else {
        checkIsRowNum[i][board[i][j]] = 1;
        checkIsColNum[j][board[i][j]] = 1;
      }
    }
  }

  backTracking(0);

  return 0;
}