#include <queue> //queue를 사용하기 위한 라이브러리
#include <iostream> //cout을 std:: 없이 사용하기 위한 라이브러리
#include <vector> // vector사용을 위한 라이브러리
#include <algorithm> 
#include <utility>

using namespace std;

priority_queue<int,vector<int>,greater<int>>pq;

int main() {

	pq.push(5);
	pq.push(3);
	pq.push(1);
	pq.push(2);
	pq.push(6);
	pq.push(4);

	//우선순위 큐 출력
	while (!pq.empty()) {
		int a = pq.top();
		cout << a << "\n";
		pq.pop();
	}
	return 0;
}