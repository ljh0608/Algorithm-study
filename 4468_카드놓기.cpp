#include <cstdio>
#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

vector<int> resultVector;
unordered_set<string> resultSet;
bool visited[10] = {
    false,
};
int n, k;
void permutation(vector<int> input, int end) {
  if (resultVector.size() == end) {
    string result = "";

    for (int i = 0; i < resultVector.size(); i++) {
      result += to_string(resultVector[i]);
    }
    resultSet.insert(result);
    return;
  }

  for (int i = 0; i < n; i++) {
    if (visited[i]) {
      continue;
    }
    visited[i] = true;
    resultVector.push_back(input[i]);
    permutation(input, end);
    visited[i] = false;
    resultVector.pop_back();
  }
}
int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  cin >> n >> k;

  vector<int> input(n);

  for (int i = 0; i < n; i++) {
    cin >> input[i];
  }

  permutation(input, k);

  cout << resultSet.size();
  return 0;
}