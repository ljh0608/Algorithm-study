//25305

#define _CRT_SECURE_NO_WARNINGS 
#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
vector<int> v;
int N,M;

int comp(int a, int b) {
	return a > b;
}


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> N>>M;
	for (int i = 0; i < N; i++) {
		int temp;
		cin >> temp;
		v.push_back(temp);
	}
	
	sort(v.begin(), v.end(), comp);

	cout << v[M-1];


	return 0;
}



