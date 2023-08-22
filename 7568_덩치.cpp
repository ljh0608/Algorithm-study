//7568

#define _CRT_SECURE_NO_WARNINGS 
#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
vector<pair<int,int>> vp;

int N;
void dungchi() {
	int p;
	for (int i = 0; i < N; i++) {
		p = 1;
		for (int j = 0; j < N; j++) {
	
			if (i == j)
				continue;

			if (vp[i].first < vp[j].first && vp[i].second < vp[j].second) {
				p++;
			}
		}
		cout << p << " ";
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	//fill_n(res, 100, 1);
	cin >> N;
	for (int i = 0; i < N; i++) {
		int height, weight;
		cin >> height >> weight;
		vp.push_back(make_pair(height, weight));
	}
	dungchi();

	return 0;
}



