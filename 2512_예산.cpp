#define _CRT_SECURE_NO_WARNINGS 
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
vector<int> v;

int N, M;

int check = 0;

long long calcBudget(int n) {

	long long sum = 0;


	for (int i = 0; i < N; i++) {
		if (v[i] <= n) {
			check++;
			sum += v[i];
		}
		else {
			sum += n;
		}
	}

	return sum;
}


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int start, end, mid;
	int result = 0;
	cin >> N;

	for (int i = 0; i < N; i++) {
		int temp;
		cin >> temp;
		v.push_back(temp);
	}

	sort(v.begin(), v.end());
	cin >> M;
	start = 0;
	end = v.back();
	while (start <= end) {
		mid = (start + end) / 2;
		check = 0;
		long long budget = calcBudget(mid);

		if (budget <= M) {
			
			start = mid + 1;
			result = max(result, mid);
		}
		else {
			end = mid - 1;
		}
	}

	cout << result;

	return 0;
}



