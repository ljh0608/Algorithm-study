#include <queue> //queue를 사용하기 위한 라이브러리
#include <iostream> //cout을 std:: 없이 사용하기 위한 라이브러리
#include <vector> // vector사용을 위한 라이브러리
#include <algorithm> 
#include <utility>

using namespace std;

struct s {
	int i;
	char c;

	//생성자
	s(int num, char alpha): i(num),c(alpha){}
};

struct cmp {
	bool operator()(s a,s b) {
		if (a.i == b.i) { //int형 값이 같으면 char값이 큰것 우선
			return a.c < b.c;
		}
		return a.i > b.i; //int형 값이 작은 것 우선
	}
};

priority_queue<s,vector<s>,cmp>pq;

int main() {

	pq.push(s(5,'a'));
	pq.push(s(5,'k'));
	pq.push(s(7,'c'));
	pq.push(s(3,'c'));
	pq.push(s(5, 'c'));
	pq.emplace(7,'z');

	//우선순위 큐 출력
	while (!pq.empty()) {
		s temp = pq.top();
		cout << temp.i <<" "<<temp.c <<"\n";
		pq.pop();
	}
	return 0;
}

//출력값
//3 c
//5 k
//5 c
//5 a
//7 z
//7 c
