
#define _CRT_SECURE_NO_WARNINGS 
#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<map>

using namespace std;

string s;
int arr[27] = { 0 };
int maxIndex = 0;
int maxNum = -1;
int sameMax = 0;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	char ch;
	cin >> s;
	for (int i = 0; i < s.length(); i++) {
		s[i] = toupper(s[i]);
		++arr[s[i] - 'A'];
	}


	for (int i = 0; i < 27; i++) {
		if (maxNum < arr[i]) {
			maxNum = arr[i];
			ch = 'A' + i;
		}
		else if (maxNum == arr[i]) {
			ch = '?';
		}
	}
		cout << ch;
	return 0;
}

