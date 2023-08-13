
#define _CRT_SECURE_NO_WARNINGS 
#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<map>
using namespace std;

vector<string>stringS;
vector<string>stringM;
int N, M;
int cnt = 0;

int compareString(string a, string b) {
	if (a == b) {
		return 0;
	}
	else if (a > b) {
		return 1;
	}
	else {
		return -1;
	}

	return 3;
}

int main() {

	cin >> N >> M;

	string temp;
	for (int i = 0; i < N; i++) {
		cin >> temp;
		stringS.push_back(temp);
	}
	sort(stringS.begin(), stringS.end());

	for (int i = 0; i < M; i++) {
		cin >> temp;
		stringM.push_back(temp);
	}
	sort(stringM.begin(), stringM.end());


	for (int i = 0; i < M; i++) {

		int start = 0;
		int end = stringS.size() - 1;

		while (start <= end ) {
			int mid = (start + end) / 2 ;
			int seperator = compareString(stringM[i], stringS[mid]);
	
			if (seperator == 0) {
				cnt++;
				break;
			}
			else if (seperator == -1) {
				end = mid - 1;
			}
			else if(seperator==1){
				start = mid + 1;
			}
		}
	}

	cout << cnt;
	return 0;
}

