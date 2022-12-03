#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

//무조건 팁 큰사람 앞으로

int N; 
//int people[100001];
vector<int> people = {};

bool compare(int i, int j) {
	return i > j;
}
int main() {
	int x;
	long long sum = 0;

	cin >> N;

	for (int i = 0; i < N; i++) {
	
		cin >> x;
		people.push_back(x);
	}

	sort(people.begin(), people.end(), compare);


	for (int i = 0; i < N; i++) {
		
		if (people[i] - i > 0)
			sum += people[i] - i;
	}

	cout << sum;

	

	return 0;
}