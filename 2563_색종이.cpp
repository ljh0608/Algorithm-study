#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int arr[100][100] = {
    0,
};

int main() {
  int n;
  int sum = 0;
  int x, y;
  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> x >> y;

    for (int j = 0; j < 10; j++) {
      for (int k = 0; k < 10; k++) {
        arr[x + j][y + k] = 1;
      }
    }
  }

  for (int j = 0; j < 100; j++) {
    for (int k = 0; k < 100; k++) {
      if (arr[j][k] == 1) {
        sum++;
      }
    }
  }

  cout << sum;

  return 0;
}

// for (int i = 0; i < vp.size(); i++) {
//   for (int j = i + 1; j < vp.size(); j++) {
//     if (abs(vp[i].first - vp[j].first) < 10 &&
//         abs(vp[i].second - vp[j].second) < 10) {
//       overlap_area += (min(vp[i].first, vp[j].first) + 10 -
//                        max(vp[i].first, vp[j].first)) *
//                       (min(vp[i].second, vp[j].second) + 10 -
//                        max(vp[i].second, vp[j].second));
//     }
//   }
// }