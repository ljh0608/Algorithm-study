#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;


int N, M;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N >> M;


	vector<vector<char>> chessboard(N, vector<char>(M));
	string caseWB[8] = {
		"WBWBWBWB",
		"BWBWBWBW",
		"WBWBWBWB",
		"BWBWBWBW",
		"WBWBWBWB",
		"BWBWBWBW",
		"WBWBWBWB",
		"BWBWBWBW",
	};
	string caseBW[8] = {
		"BWBWBWBW",
		"WBWBWBWB",
		"BWBWBWBW",
		"WBWBWBWB",
		"BWBWBWBW",
		"WBWBWBWB",
		"BWBWBWBW",
		"WBWBWBWB",
	};

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			int ch;
			cin >> chessboard[i][j];
		}
	}

	int a = 0;
	int b = 0;
	int res = 64;
	int temp=64;
	while ( a + 8 <= N) {
		int cnt1 = 0;
		int cnt2 = 0;
		for (int i = 0; i <  8; i++) {
			for (int j = 0; j < 8; j++) {
				if (chessboard[i+a][j+b] != caseWB[i][j]) {
					cnt1++;
				}
				if (chessboard[i + a][j + b] != caseBW[i][j]) {
					cnt2++;
				}
			}
		}

		//cout << cnt1 << " " << cnt2<<"\n";
		temp = min(cnt1, cnt2);
		res = min(temp, res);
		//cout << res << "\n";
		if (b + 8 == M) {
			a++;
			b = 0;
			continue;
		}
		b++;
	}



	cout << res;


	return 0;
}

