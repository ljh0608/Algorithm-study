
#define _CRT_SECURE_NO_WARNINGS 
#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<map>
using namespace std;

vector<int> v(0);

int N,M;
int sum;

int main() {

	cin >> N;
	
	for (int i = 0; i < N; i++) {
		int temp;
		cin >> temp;
		temp += 10000000;
		v[i]++;
	}
	
	cin >> M;

	for (int i = 0; i < M; i++) {
		int t;
		cin >> t;
		cout << v[t + 10000000] <<" ";
	}


	return 0;
}

