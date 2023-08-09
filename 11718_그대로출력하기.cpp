#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;


int num;
int result = 0;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	while (1) {
		string str;
		getline(cin, str);
		if (str == "") {
			break;
		}
		cout << str<<"\n";
	}




	return 0;
}

