#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

char a[100];
vector<char> b;
string str;
int N;
int main() {

	cin >> str;

	int result = 0;
	string num;
	bool isMinus = false;

	for (int i = 0; i <= str.size(); i++) {
		if (str[i] == '+' || str[i] == '-' || i == str.size()) {
			if (isMinus) {
				result -= stoi(num);
				num = "";
			}
			else {
				result += stoi(num);
				num = "";
			}
		}
		else {
			num += str[i];
		}
		if (str[i] == '-') {
			isMinus = true;
		}


	}

	cout << result;


	//for (int i = 0; i < str.size(); i++) {
	//	cout << str[i]<<"\n";
	//	cout << i;
	//}
	//cout << "\n";
	//cout << str;


	return 0;
}