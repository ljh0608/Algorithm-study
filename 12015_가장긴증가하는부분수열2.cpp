//12015

#define _CRT_SECURE_NO_WARNINGS 
#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
vector<int> v;

int arr[1000001];
int N;
vector<int>result;

void binery_search(int num) {
	int ret = 1000000;
	int start = 0;
	int end = result.size() - 1;

	while (start <= end) {
		int mid = (start + end) / 2;
		int value = result[mid];

		if (value >= num) {
			if (ret > mid) {
				ret = mid;
			}

			end = mid - 1;
		}

		else {
			start = mid + 1;
		}
	}

	result[ret] = num;

	return;
}

void insert() {
	result.push_back(arr[0]);

	for (int i = 1; i < N; i++) {
		if (result.back() < arr[i]) {
			result.push_back(arr[i]);
		}
		else if (result.back() == arr[i]) {
			continue;
		}
		 else {
			 binery_search(arr[i]);
		 }
	 }

	 return;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);


	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}
	
	insert();

	cout << result.size();

	return 0;
}



