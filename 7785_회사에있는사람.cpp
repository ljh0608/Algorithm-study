#include <algorithm>
#include <iostream>
#include <map>
#include <vector>
using namespace std;

vector<pair<string, string> > vp;
vector<string> ans;

bool compare(string a, string b) {
  if (a > b) {
    return true;
  } else {
    return false;
  }
}

int main() {
  string name;
  string status;

  map<string, string, greater<string> > m;

  int n;
  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> name;
    cin >> status;
    m[name] = status;
  }

  for (auto it = m.begin(); it != m.end(); ++it) {
    if (it->second == "enter") {
      cout << it->first << "\n";
    }
  }

  return 0;
}