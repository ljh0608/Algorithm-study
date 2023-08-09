#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
int x, y;
int a, b, c, d, e, f;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> a >> b >> c >> d >> e >> f;
	x = (c * e - b * f) / (a * e - b * d);
	y = (d * c - a * f) / (b * d - a * e);

	cout << x << " " << y;
	return 0;
}
