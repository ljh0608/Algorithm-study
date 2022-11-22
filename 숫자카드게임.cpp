////#define _CRT_SECURE_NO_WARNINGS
////
////#include <iostream>
////#include <algorithm>
////using namespace std;
//
//
//#define _CRT_SECURE_NO_WARNINGS
//
//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int arr[10001][10001];
//
//int main() {
//	int N, M;
//	
//	int smallArr[10001];
//	int smallNum = 1000;
//
//	cin >> N >> M;
//	
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < M; j++) {
//			cin >> arr[i][j];
//		}
//	}
//
//	//for (int i = 0; i < N; i++) {
//	//	for (int j = 0; j < M; j++) {
//	//	printf("%d", arr[i][j]);
//	//	}
//	//	printf("\n");
//	//}
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < M; j++) {
//			if (smallNum > arr[i][j])
//				smallNum = arr[i][j];
//		}
//		smallArr[i] = smallNum;
//		smallNum = 10000;
//	}
//
//	sort(smallArr, smallArr + N);
//
//	//for (int i = 0; i < N; i++) {
//	//	printf("%d ", smallArr[i]);
//	//}
//	printf("%d", smallArr[N-1]);
//
//
//
//	return 0;
//}