
#define _CRT_SECURE_NO_WARNINGS 
#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<map>
using namespace std;

int N;
vector<int>v;
int main() {

	cin >> N;
	for (int i = 0; i < N; i++) {
		int temp;
		cin >> temp;
		v.push_back(temp);
	}

	sort(v.begin(), v.end());

	
	for (int i = 0; i < N; i++) {
		cout << v[i]<<"\n";
	}

	return 0;
}

