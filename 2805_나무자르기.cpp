#define _CRT_SECURE_NO_WARNINGS 
#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<map>
using namespace std;


vector<int> v;

int N, M;


long long cuttingTree(long cut) {
	long long sum = 0;
	for (int i = 0; i < N; i++) {
		if (v[i] - cut > 0) {
			sum += v[i] - cut;
		}
	}
	
	return sum;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	long  start, end, mid;
	long  result = 0;
	cin >> N >> M;

	for (int i = 0; i < N; i++) {
		int tree_height;
		cin >> tree_height;
		v.push_back(tree_height);
	}

	sort(v.begin(), v.end());

	start = 1;
	end = v.back();

	while (start <= end) {
		mid = (start + end) / 2;

		long long tree= cuttingTree(mid);

		if (tree < M) {
			end = mid - 1;
		}
		else {
			start = mid + 1;
			result = max(result, mid);
		}
	}

	cout << result;

	return 0;
}



