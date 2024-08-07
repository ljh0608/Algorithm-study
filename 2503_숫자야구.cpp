#include <algorithm>
#include <cstdio>
#include <iostream>
#include <vector>

using namespace std;

vector<int> v;
vector<pair<int, int> > pv;

int result = 0;

bool checkNum(int nomineeNum, int askNum, int s, int b) {
  int tempS = 0, tempB = 0;

  int nomineeDigit[3];
  int askNumDigit[3];

  nomineeDigit[0] = nomineeNum / 100;
  askNumDigit[0] = askNum / 100;

  nomineeDigit[1] = nomineeNum / 10 % 10;
  askNumDigit[1] = askNum / 10 % 10;

  nomineeDigit[2] = nomineeNum % 10;
  askNumDigit[2] = askNum % 10;

  if (nomineeDigit[0] == nomineeDigit[1] ||
      nomineeDigit[0] == nomineeDigit[2] ||
      nomineeDigit[1] == nomineeDigit[2]) {
    return false;
  }

  if (nomineeDigit[0] == 0 || nomineeDigit[1] == 0 || nomineeDigit[2] == 0) {
    return false;
  }
  for (int i = 0; i < 3; i++) {
    if (nomineeDigit[i] == askNumDigit[i]) {
      tempS++;
    }
  }
  // 123 324
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      if (i != j) {
        if (nomineeDigit[i] == askNumDigit[j]) {
          tempB++;
        }
      }
    }
  }

  if (tempS == s && tempB == b) {
    return true;
  } else {
    return false;
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n;

  cin >> n;

  for (int i = 0; i < n; i++) {
    int temp;
    cin >> temp;
    v.push_back(temp);

    int s, b;

    cin >> s >> b;
    pv.push_back(make_pair(s, b));
  }

  for (int i = 123; i <= 987; i++) {
    int valid = 1;
    for (int j = 0; j < n; j++) {
      if (!checkNum(i, v[j], pv[j].first, pv[j].second)) {
        valid = 0;
        break;
      }
    }
    if (valid) {
      result++;
    }
  }

  cout << result;
  return 0;
}