#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;


int N, M;
int times[50] = { 3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,8,8,8,8,9,9,9,10,10,10,10 };

string phone;
int result = 0;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> phone;
	for (int i = 0; i<phone.length(); i++) {
		result += times[phone[i] - 'A'];
	}

	cout << result;


	return 0;
}

