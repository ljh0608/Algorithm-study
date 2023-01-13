#include <queue> //queue�� ����ϱ� ���� ���̺귯��
#include <iostream> //cout�� std:: ���� ����ϱ� ���� ���̺귯��
#include <vector> // vector����� ���� ���̺귯��
#include <algorithm> 
#include <utility>

using namespace std;

priority_queue<pair<char, int>>pq;

int main() {

	//pair ������Ʈ�� ������ �ʰ� �ٷ� ���� push�Ѵ�.
	pq.emplace('a', 24); 

	//pq.push('v', 30);  //��ü ������ pair�̹Ƿ� ������

	pq.push(make_pair('v', 25));

	//�켱���� ť ���
	while (!pq.empty()) {
		pair<char,int> p= pq.top();
		cout << p.first << " " << p.second << "\n";
		pq.pop();
		
	}

	//  ��°��
	//	v 25
	//	a 24
	return 0;
}