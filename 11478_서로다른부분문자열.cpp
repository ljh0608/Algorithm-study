#include <algorithm>
#include <iostream>
#include <map>
#include <vector>
using namespace std;
int n, m;
map<string, bool> ms;
string s;
int main() {
  cin >> s;
  string temp;
  for (int i = 0; i < s.size(); i++) {
    for (int j = 1; i + j <= s.size(); j++) {
      temp = s.substr(i, j);
      ms[temp] = true;
    }
  }

  cout << ms.size();

  return 0;
}