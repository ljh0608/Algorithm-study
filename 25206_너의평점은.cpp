#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<map>

using namespace std;

double sumGrade = 0;
double sumCredit = 0;
double avg = 0;
map<string, double>m;

void calcGrade(double credit, string grade) {

	if (grade == "P")  {
		return ;
	}
	sumCredit += credit;
	if (m.find(grade) != m.end()) {
		sumGrade += m[grade]* credit;
	}
}

void setMap() {
	m.insert(make_pair("A+", 4.5));
	m.insert(make_pair("A0", 4.0));
	m.insert(make_pair("B+", 3.5));
	m.insert(make_pair("B0", 3.0));
	m.insert(make_pair("C+", 2.5));
	m.insert(make_pair("C0", 2.0));
	m.insert(make_pair("D+", 1.5));
	m.insert(make_pair("D0", 1.0));

	m.insert(make_pair("F", 0.0));
	//m.insert(make_pair("P", 10000.0));


}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cout << fixed;
	cout.precision(6);

	setMap();
	for (int i = 0; i < 20; i++) {
		string subject;
		double credit;
		string grade;

		cin >> subject >> credit >> grade;

		calcGrade(credit, grade);
	}

	avg = sumGrade / sumCredit;
	cout << avg;

	return 0;
}

