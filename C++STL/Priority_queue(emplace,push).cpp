#include <queue> //queue를 사용하기 위한 라이브러리
#include <iostream> //cout을 std:: 없이 사용하기 위한 라이브러리
#include <vector> // vector사용을 위한 라이브러리
#include <algorithm> 
#include <utility>

using namespace std;

priority_queue<pair<char, int>>pq;

int main() {

	//pair 오브젝트를 만들지 않고 바로 값을 push한다.
	pq.emplace('a', 24); 

	//pq.push('v', 30);  //개체 형식이 pair이므로 오류남

	pq.push(make_pair('v', 25));

	//우선순위 큐 출력
	while (!pq.empty()) {
		pair<char,int> p= pq.top();
		cout << p.first << " " << p.second << "\n";
		pq.pop();
		
	}

	//  출력결과
	//	v 25
	//	a 24
	return 0;
}