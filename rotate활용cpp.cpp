#include <cstdio>
#include <vector>
#include <algorithm>
#include <iostream>
#include <string>


using namespace std;

vector<int> v;
vector<int> r;

int n;


int main() {
	for(int i = 1; i < 10; i++) {
		v.push_back(i);
	}
	rotate(v.begin(), v.begin() + 1, v.end());
	rotate(v.begin(), v.begin()+v.size() - 1, v.end());
	for (int i = 0; i < 9; i++) {
		cout << v[i]<<"\n";
	}

	return 0;
}
