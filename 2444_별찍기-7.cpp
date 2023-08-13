


#define _CRT_SECURE_NO_WARNINGS 
#include<iostream>
#include<algorithm>
#include<vector>
#include<string>

using namespace std;

int main() {
		ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	for (int j = 1; j <= n; j++) {
		for (int k = j; k < n; k++) {
			cout << " ";
		}
		for (int i = 0; i < 2 * j - 1; i++) {
			cout << "*";
		}
		cout << "\n";
	}

	for (int j = n; j > 1; j--) {
		for (int k = j; k <= n; k++) {
			cout << " ";
		}
		for (int i = 2; i < 2 * j - 1; i++) {
			cout << "*";
		}
		cout << "\n";
	}





	return 0;
}