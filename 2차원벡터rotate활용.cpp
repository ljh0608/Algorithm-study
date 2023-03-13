#include <cstdio>
#include <vector>
#include <algorithm>
#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;


vector<int> r;

int n;
void rotate90(vector<vector<int>>& key) {
	int m = key.size();
	vector<vector<int>> temp(m, vector<int>(m, 0));
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < m; j++) {
			temp[i][j] = key[j][m - i - 1];
		}
	}
	key = temp;
	return;
}

int main() {
	int k;
	int c = 1;

	cin >> k;
	vector < vector <int> > v(k, vector <int>(k, 0));
	for (int i = 0; i < k; i++) {
		for (int j = 0; j < k; j++) {
			v[i][j] = c;
			c++;
		}
	}

	for (int i = 0; i < k; i++) {
		for (int j = 0; j < k; j++) {
			cout << v[i][j] << " ";
			
		}
		cout << "\n";
	}

	rotate90(v);

	for (int i = 0; i < k; i++) {
		for (int j = 0; j < k; j++) {
			cout << v[i][j] << " ";

		}
		cout << "\n";
	}
	return 0;
}
