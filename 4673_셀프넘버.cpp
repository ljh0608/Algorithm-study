//4673

#define _CRT_SECURE_NO_WARNINGS 
#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
vector<int> v;

int n;

int dn(int num) {
	int result = num;

	for (int i = 1; i <= num; i++) {
		int sum = i;
		int temp = i;
		while (temp) {
			sum += temp % 10;
			temp /= 10;
		}
		if (sum == num) {
			return 0;
		}	
	}

	return num;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	for (int i = 1; i <= 10000; i++) {
		if (dn(i)) {
			cout << i << "\n";
		}

	
	}
	


	return 0;
}



