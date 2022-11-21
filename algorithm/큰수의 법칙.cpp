#define _CRT_SECURE_NO_WARNINGS


#include <iostream>
#include <algorithm>
using namespace std;

int N, M, K;
int arr[1001];
int main()
{
	int result = 0;
	int first, second;
	int su = 0;


	scanf("%d %d %d", &N, &M, &K);

	for (int i = 0; i < N; i++)
	{
		scanf("%d", &arr[i]);
	}

	sort(arr, arr + N);

	first = arr[N - 1];
	second = arr[N - 2];

	su = first * K + second;

	int count = M / (K + 1)*K;


	result = count * first+(M-count)*second;




	printf("%d", result);



	return 0;
}