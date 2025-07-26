#include <algorithm>
#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;

int n;
vector<string> vs;

bool cmp(string a, string b) {
  if (a.length() != b.length()) {
    return a.length() < b.length();
  } else {
    return a < b;
  }
}

int main() {
  string s;
  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> s;
    vs.push_back(s);
  }

  sort(vs.begin(), vs.end(), cmp);

  vs.erase(unique(vs.begin(), vs.end()), vs.end());
  for (int i = 0; i < vs.size(); i++) {
    cout << vs[i] << "\n";
  }

  return 0;
}