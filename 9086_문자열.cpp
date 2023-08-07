#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
int T;


int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> T;
	for (int i = 0; i < T; i++) {
		string s;
		cin >> s;
		cout << s[0] << s[s.length() - 1]<<"\n";
		
	}


	return 0;
}
