#include <queue> //queue�� ����ϱ� ���� ���̺귯��
#include <iostream> //cout�� std:: ���� ����ϱ� ���� ���̺귯��
#include <vector> // vector����� ���� ���̺귯��
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

	//�켱���� ť ���
	while (!pq.empty()) {
		int a = pq.top();
		cout << a << "\n";
		pq.pop();
	}
	return 0;
}