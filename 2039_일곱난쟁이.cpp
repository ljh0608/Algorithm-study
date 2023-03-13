#include <cstdio>
#include <vector>
#include <algorithm>
#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;


vector<int> v;
vector<int> b;
int c;
int sum = 0;
void printV(vector<int>v) {
	for (auto a : v) {
		cout << a << "\n";
	}
}
void combi(int start, vector<int>& b) {
	if (b.size() == 7) {
		int sum = accumulate(b.begin(), b.end(), 0);
		if (sum == 100) {
			printV(b);
			exit(0);
		}
	}
	for (int i = start + 1; i < 9; i++) {
		b.push_back(v[i]);
		combi(i, b);
		b.pop_back();
	}
	return;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	for (int i = 0; i < 9; i++) {
		
		cin >> c;
		v.push_back(c);
	}

	sort(v.begin(), v.end());


		combi(-1, b);
	
}
