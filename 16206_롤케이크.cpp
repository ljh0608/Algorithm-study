#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <queue>
using namespace std;

int N, M;

vector<int>v;
vector<int>v2;

bool cmp(int a, int b) {
	return a > b;
}
int main() {
	cin >> N >> M;
	int a;
	int count=0;
	int cut = M;
	for (int i = 0; i < N; i++) {
		cin >> a;
		if (a % 10 == 0) {
			v2.push_back(a);
		}
		else {
			v.push_back(a);
		}
	}
	sort(v2.begin(), v2.end(),cmp);
	/*cout << v.size() <<"\n"<< v2.size();*/

	while (!v2.empty()) {

		if (v2[v2.size() - 1] == 10) {
			count++;
			v2.pop_back();
			continue;
		}
		v2[v2.size() - 1] -= 10;
		count++;
		cut--;
		if (v2[v2.size() - 1] == 0&&!v2.empty())
		{
			count++;
			v2.pop_back();
		}
	

		if (cut == 0) {
			if (v2[v2.size() - 1] == 10) {
				count++;
			}
			break;
		}
	}
	
	while (cut > 0) {

		if (!v.empty()) {
			if (v[v.size() - 1] < 10)
			{
				v.pop_back();
				continue;
			}
		}
		if (v.empty())
			break;

			v[v.size() - 1] -= 10;
			count++;
			cut--;
		
		
		
	}

	cout << count;



	}




