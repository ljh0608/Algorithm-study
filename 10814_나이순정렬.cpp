#include <algorithm>
#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;

bool cmp(pair<int, string> a, pair<int, string> b) {
  if (a.first == b.first) {
    return false;
  } else {
    return a.first < b.first;
  }
}

int main() {
  vector<pair<int, string> > vp;

  int n;
  cin >> n;

  int age;
  string name;
  for (int i = 0; i < n; i++) {
    cin >> age;
    cin >> name;
    vp.push_back(make_pair(age, name));
  }

  stable_sort(vp.begin(), vp.end(), cmp);

  for (int i = 0; i < n; i++) {
    cout << vp[i].first << " " << vp[i].second << "\n";
  }

  return 0;
}