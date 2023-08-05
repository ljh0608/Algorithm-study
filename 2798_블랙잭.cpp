#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
int N, M;
int result = 0;


int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	vector<int>v;
	cin >> N >> M;

	for (int i = 0; i < N; i++) {
		int a;
		cin >> a;
		v.push_back(a);
	}


	for (int i = 0; i < N; i++) {
		for (int j = i + 1; j < N; j++) {
			for (int k = j + 1; k < N; k++) {
				int temp = v[i] + v[j] + v[k];
				if (temp <= M) {
					result = max(result, temp);
				}
			}
		}
	}

	cout << result;
	return 0;
}
