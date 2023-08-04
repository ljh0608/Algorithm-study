#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
int N, M;
int diff = 10000;

int sum = 0;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N;
	for (int i = 1; i < N; i++) {
		sum = 0;
		int temp = i;
		sum += temp;
		while(temp){
			sum += temp % 10;
			temp /= 10;
		}
		//cout << "i: "<<i<<"sum: "<< sum << "\n";
		if (sum == N) {
			cout << i;
			return 0;
		}
		
	}
	
	cout << 0;


	return 0;
}
