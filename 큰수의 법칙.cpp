//
//#define _CRT_SECURE_NO_WARNINGS
//
//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int N, M, K;
//int arr[10001];
//int main() {
//
//	int count = 0;
//	int first, second;
//	int result = 0;
//
//	scanf("%d%d%d", &N, &M, &K);
//	
//	for (int i = 0; i < N; i++) {
//		scanf("%d", &arr[i]);
//	}
//	sort(arr,arr+N);
//	
//	for (int i = 0; i < N; i++) {
//		printf("%d", arr[i]);
//	}
//	printf("\n");
//	first = arr[N - 1];
//	second = arr[N - 2];
//
//	count = (M / (K + 1) * K) + M % (K + 1);
//	
//	result = first * count + second * (M - count);
//
//	printf("%d", result);
//
//	return 0;
//}