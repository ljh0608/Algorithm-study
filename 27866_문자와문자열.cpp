#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;

string str;
int num;
int result = 0;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> str;
	cin >> num;

	cout << str[num-1];


	return 0;
}

