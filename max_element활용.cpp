#include <cstdio>
#include <vector>
#include <algorithm>
#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

vector<int> v;
vector<int> r;

int n;


int main() {
	for(int i = 1; i < 10; i++) {
		v.push_back(i);

		}
	int a = *max_element(v.begin(), v.end());
	cout << a;
	return 0;
}
