
#define _CRT_SECURE_NO_WARNINGS 
#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<map>
using namespace std;

vector<pair<int,int>> p;
int N;
int sum;

int main() {

	cin >> N;

	for (int i = 0; i < N; i++) {
		int x, y;
		cin >> x;
		cin >> y;

		cout << "x: " << x << "y: " << y;
		p.push_back(make_pair(x, y));
	}
	sort(p.begin(), p.end());

	cout << "---------------\n";
	for (int i = 0; i < N; i++) {
		cout<< p[i];
	}

	//for (int i = 0; i < N; i++) {
	//	cout << p[i].first << " "<< p[i].second;
	//}

	return 0;
}

