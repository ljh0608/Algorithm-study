#include <cstdio>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

vector<int> v;
vector<int> r;
bool visited[10001] = { 0, };
void printV(vector<int>& v) {
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << " ";
	}
	cout << "\n";
	
}

void mp(int n, int m ,int a) {
	if (r.size()==m) {
		printV(r);
	
		return;
	}

	for (int i = 0; i < n; i++) {
		if (!visited[i]) {
			r.push_back(v[i]);
			visited[i] = true;
			mp(n, m,a+1);
			visited[i] = false;
			if (!r.empty())
				r.pop_back();
		}
		
			

	}
}

int main() {
	int n, m;
	cin >> n >> m;

	for (int i = 1; i <= n; i++) {
		v.push_back(i);
	}
	mp(n, m, 0);



}
