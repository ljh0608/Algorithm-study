#include <algorithm>
#include <iostream>
#include <map>
#include <string>
#include <vector>
using namespace std;

map<string, string> mapM;
vector<string> v;
vector<string> res;
int main() {
  int n, m;
  string temp;
  cin >> n >> m;
  string poketmon_name;
  for (int i = 0; i < n; i++) {
    cin >> poketmon_name;
    mapM[poketmon_name] = to_string(i + 1);
    v.push_back(poketmon_name);
  }

  for (int i = 0; i < m; i++) {
    cin >> temp;
    if (temp[0] >= 65 && temp[0] <= 90) {
      res.push_back(mapM[temp]);
    } else {
      res.push_back(v[stoi(temp) - 1]);
    }
  }

  for (int i = 0; i < m; i++) {
    cout << res[i] << "\n";
  }
  return 0;
}