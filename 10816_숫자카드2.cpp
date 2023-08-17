

//접근 1

#define _CRT_SECURE_NO_WARNINGS 
#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<map>
using namespace std;


vector<int> v;

int N, M;
int sum;
int convertNum[20000001] = { 0 };
int negativeToPositive = 10000000;
int main() {
	//ios_base::sync_with_stdio(false);
	//cin.tie(NULL);

	cin >> N;
	int temp;
	for (int i = 0; i < N; i++) {
		cin >> temp;
		convertNum[temp + negativeToPositive]++;
	}

	cin >> M;
	for (int i = 0; i < M; i++) {
		cin >> temp;
		cout << convertNum[temp + negativeToPositive]<<" ";
	}
	return 0;
}




// 접근2
//#define _CRT_SECURE_NO_WARNINGS 
//#include<iostream>
//#include<algorithm>
//#include<vector>
//using namespace std;
//
//int N, M;
//vector<int> v;
//int lower_bound(int start, int end, int value) {
//	int mid;
//	while (start <= end) {
//		mid = (start + end) / 2;
//		if (v[mid] >= value) {
//			end = mid - 1;
//		}
//		else {
//			start = mid + 1;
//		}
//	}
//
//	return start;
//
//}
//
//int upper_bound(int start, int end, int value) {
//	int mid;
//	while (start <= end) {
//		mid = (start + end) / 2;
//		if (v[mid] <= value) {
//			start = mid + 1;
//		}
//		else {
//			end = mid - 1;
//		}
//	}
//	return end;
//}
//
//int main() {
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	cin >> N;
//	int temp;
//	for (int i = 0; i < N; i++) {
//		cin >> temp;
//		v.push_back(temp);
//	}
//
//	sort(v.begin(), v.end());
//	cin >> M;
//	int num, start, end, low, up;
//	for (int i = 0; i < M; i++) {
//		cin >> num;
//		start = 0;
//		end = N - 1;
//
//		low = lower_bound(start, end, num);
//		up = upper_bound(start, end, num);
//
//		cout << up - low + 1 << " ";
//	}
//
//
//
//	return 0;
//}