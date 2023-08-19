//14888

#define _CRT_SECURE_NO_WARNINGS 
#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
vector<int> v;
int arr[12];
int calc[4] = { 0 };
int N;
int calcNum;
int maxNum=-1000000000, minNum=1000000000;

void setCalcNum(int result, int n) {

	if (n == N) {
		maxNum = max(maxNum, result);
		minNum = min(minNum, result);
		return;
	}

	for (int i = 0; i < 4; i++) {
		if (calc[i] > 0) {
			calc[i]--;
			if (i == 0) {
				setCalcNum(result + arr[n], n + 1);
			}
			if (i == 1)
			{
				setCalcNum(result - arr[n], n + 1);
			}
			if (i == 2) {
		
				setCalcNum(result * arr[n], n+1);
			}
			if (i == 3) {
			
				setCalcNum(result / arr[n], n+1);
			}
			calc[i]++;
		}
		
	}


}



int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}
	
	for (int i = 0; i < 4; i++) {
		cin >> calc[i];
	}

	setCalcNum(arr[0],1);

	cout << maxNum << "\n" << minNum;
	return 0;
}



