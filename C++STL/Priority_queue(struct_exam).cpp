#include <queue> //queue�� ����ϱ� ���� ���̺귯��
#include <iostream> //cout�� std:: ���� ����ϱ� ���� ���̺귯��
#include <vector> // vector����� ���� ���̺귯��
#include <algorithm> 
#include <utility>

using namespace std;

struct s {
	int i;
	char c;

	//������
	s(int num, char alpha): i(num),c(alpha){}
};

struct cmp {
	bool operator()(s a,s b) {
		if (a.i == b.i) { //int�� ���� ������ char���� ū�� �켱
			return a.c < b.c;
		}
		return a.i > b.i; //int�� ���� ���� �� �켱
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

	//�켱���� ť ���
	while (!pq.empty()) {
		s temp = pq.top();
		cout << temp.i <<" "<<temp.c <<"\n";
		pq.pop();
	}
	return 0;
}

//��°�
//3 c
//5 k
//5 c
//5 a
//7 z
//7 c
