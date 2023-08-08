#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	string s;
	getline(cin, s);
	int cnt = 0;

	for (int i = 0; i < s.length(); i++) {
		if (i!=0 &&i!=s.length()-1&&s[i] ==' ') {
			cnt++;
		}
	}
	if (s.length() == 1 && s[0] == ' ')
	{
		cout << 0;
		return 0;
	}
	cout << cnt+1;

	return 0;
}
