#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;




int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int res = 0;
	int N;
	cin >> N;


	for (int i = 0; i < N; i++) {
		int check[26] = { 0 };
		string s;
		char tempChar='A';
		cin >> s;
	
		for (int j = 0; j < s.length(); j++) {
			if (tempChar == s[j]) {
				if (j == s.length() - 1) {
					res++;
		/*			cout << "현재 res: " << res << "\n";*/
				}
				continue;
			}
			if (check[s[j] - 'a'] == 0) {
		/*		cout << "s[j] " <<s[j] - 'a'<<"\n";*/
				tempChar = s[j];
				check[s[j] - 'a'] =1;
				if (j == s.length() - 1) {
					res++;
			/*		cout << "현재 res: " << res << "\n";*/
				}
				continue;
			}
			if (check[s[j] - 'a'] == 1) {
				break;
			}

			
		}
	}
	cout << res;


	return 0;
}

