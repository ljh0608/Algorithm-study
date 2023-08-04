#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

int a,b;
queue<int> q;
int stop = 0;
vector<string>resultString = { "factor", "multiple", "neither" };
int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	while (1) {
		cin >> a >> b;

		if (a == 0 && b == 0) {
			break;
		}
		if (a > b) {
			if (a % b == 0) {
				cout << resultString[1]<<"\n";
			}
			else {
				cout << resultString[2] << "\n";
			}
		}

		else {
			if (b % a == 0) {
				cout << resultString[0] << "\n";
			}
			else {
				cout << resultString[2] << "\n";
			}
		}
	}




	return 0;
}
