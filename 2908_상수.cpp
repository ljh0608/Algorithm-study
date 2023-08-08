#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;


int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	string s1, s2;

	cin >> s1 >> s2;

	reverse(s1.begin(), s1.end());
	reverse(s2.begin(), s2.end());

	if (stoi(s1) > stoi(s2)) {
		cout << s1;
	}
	else {
		cout << s2;
	}


	return 0;
}

