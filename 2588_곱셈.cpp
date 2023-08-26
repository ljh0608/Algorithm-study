#define _CRT_SECURE_NO_WARNINGS 
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
vector<int> v;


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int a, b;
	cin >> a >> b;
	int sum = 0;
	int c = 1;
	while (1) {
		
		cout << a * (b % 10) << "\n";
		sum += a * (b % 10)*c;
		
		c *= 10;
		b /= 10;
		if (!b) {
			break;
		}

	}

	cout << sum;

	return 0;
}



