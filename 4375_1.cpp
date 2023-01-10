#define _CRT_SECURE_NO_WARNINGS
//
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <queue>
using namespace std;

int N;
int main() {

	while (scanf("%d",&N)!=EOF) {
	
		int cnt = 1;
		int ret = 1;
		while (1) {
			if (cnt%N == 0) {
				cout << ret<<"\n";
				break;
			}
			cnt = cnt * 10 + 1;
			cnt %= N;
			ret++;

		
		}	
	}

	}




