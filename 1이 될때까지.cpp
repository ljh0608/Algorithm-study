#define _CRT_SECURE_NO_WARNINGS
//git test

#include <iostream>
#include <algorithm>
using namespace std;

int N, K;
int main() {

	cin >> N>> K;
	int count = 0;

	while (1) {

		if (N % K == 0)
		{
			N = N / K;
			count++;
		}
		else {
			N -= 1;
			count++;
		}

		if (N == 1)
			break;
	}

	cout << count;
	return 0;
}