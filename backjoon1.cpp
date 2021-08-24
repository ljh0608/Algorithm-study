#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <algorithm>
//using namespace std;
//
//int main() {
//
//	int i;
//	int n;
//
//
//	scanf("%d", &n);
//
//
//	for (int j = 0; j < n; j++) {
//		for (int i = 0; i <= j; i++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	return 0;
//}
//#include <stdio.h> //backjoon 10992번
//#include<algorithm>
//using namespace std;
//
//int main() {
//
//
//	int n;
//	int i;
//	scanf("%d", &n);
//
//	for (i = 0; i < n; i++) {
//
//		if (i == n - 1)
//		{
//			for (int k = 0; k < 2 * n - 1; k++)
//				printf("*");
//			break;
//		}
//		
//			for (int k = 0; k <  n-i-1 ; k++)
//				printf(" ");
//
//			if (i == 0) {
//				printf("*");
//				printf("\n");
//				continue;
//			}
//
//
//		printf("*");
//		for (int j = 0; j <2*i-1 ; j++) {
//			printf(" ");
//
//		}
//		printf("*\n");
//
//
//
//	}
//
//	return 0;
//}




//#include <stdio.h> //backjoon 2442
//#include <algorithm>
//using namespace std;
//
//int main() {
//
//	int n;
//
//	scanf("%d", &n);
//	int i, j;
//	for (j = 0; j < n; j++)
//	{
//		for (i = j; i < n - 1; i++) {
//			printf(" ");
//		}
//
//		for (int k = 0; k < j * 2 + 1; k++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//
//	return 0;
//}


//#include <stdio.h> //backjoon 1748
//#include <string>
//#include <stdlib.h>
//using namespace std;
//
//int main() {
//
//	int n;
//	int i;
//	char stra[100];
//	string str="";
//	string str2="";
//
//	scanf("%d", &n);
//
//
//	for ( i = 1; i <= n; i++) {
//		
//		sprintf(stra, "%d", i);
//		str2 = stra;
//		str += str2;
//	}
//
//	printf("%d",str.length());
//
//
//
//	return 0;
//}

// //backjoon 1748
//#include <iostream>
//#include <algorithm>
//#include <cmath>
//#include <string>
//using namespace std;
//
//int main() {
//
//	string n;
//	int i;
//	int len;
//	cin >> n;
//	long result=0;
//	int cnt = 0;
//
//	int num = stoi(n);
//	len = n.size();
//	
//	for (int i = 1; i <= len-1; i++) {
//		result += (long)pow(10, i - 1) * 9 * (i);
//	}
//	for (i = pow(10, len - 1); i <= num; i++)
//	{
//		cnt += len;
//	}
//
//	printf("%ld", result + (long)cnt);
//
//	return 0;
//}
// 
// 
// 
// //backjoon 1748
//#include <iostream>
//#include <algorithm>
//using namespace std;
//int main() {
//
//	long long int a;
//	long long int b=0;
//	int n;
//	int c = 1;
//	scanf("%d", &n);
//
//	for (int i = 1; i <= n; i *= 10) {
//		
//		if (n / i >= 10)
//		{
//			b += i * c * 9;
//			c++;
//		}
//		else {
//			b += (n - i + 1) * c;
//		}
//	}
//	printf("%lld", b);
//
//
//
//}


//backjoon 15719
//#include <iostream>
//#include <algorithm>
//#include <vector>
//#define MAX 10000000
//int arr[MAX];
//using namespace std;
//int main() {
//
//	int n;
//	int i;
//	int k;
//
//	scanf("%d", &n);
//	
//
//	long long int sum =(long long int )(n - 1) * n / 2;
//	long long int sum2 = 0;
//	for (i = 0; i < n; i++) {
//		scanf("%d", &arr[i]);
//		sum2 += (long long)arr[i];
//
//	}
//
//	printf("%lld", sum2 - sum);
//
//
//	return 0;
//}


//#include <iostream>
//#include <algorithm>
//#include <string>
//using namespace std;
//int main()
//{
//	string str;
//
//	scanf("%s", str);
//
//	str += "??!";
//
//	printf("%s",str);
//
//	return 0;
//}


////1244번
//#include <iostream>
//#include <algorithm>
//#include <string>
//using namespace std;
//
//typedef struct _info {
//	int sex;
//	int num;
//}info;
//
//int main()
//{
//	int switchNum;
//	int arr1[101] = { 9, };
//	int arr2[5][20];
//	int std;
//	int sex;
//
//	int leftn, rightn;
//
//	info stdinfo[101];
//
//
//	scanf("%d", &switchNum);
//
//	for (int i = 1; i <= switchNum; i++) {
//		scanf("%d", &arr1[i]);
//	}
//
//	scanf("%d", &std);
//
//	for (int i = 0; i < std; i++)
//	{
//		scanf("%d", &stdinfo[i].sex);
//		scanf("%d", &stdinfo[i].num);
//	}
//
//
//	for (int i = 0; i < std; i++) {
//		if (stdinfo[i].sex == 1) {
//			for (int j = (stdinfo[i].num); j < switchNum; j+=(stdinfo[i].num)) {
//				if (arr1[j] == 1)
//					arr1[j] = 0;
//				else
//					arr1[j] = 1;
//			}
//		}
//
//		else if (stdinfo[i].sex == 2) {
//		
//			int a = stdinfo[i].num;
//	
//			leftn = a - 1;
//			rightn = a + 1;
//
//			arr1[(stdinfo[i].num)] = arr1[(stdinfo[i].num)] == 0 ? 1 : 0;
//
//			while (arr1[leftn]==arr1[rightn]) {
//
//				/*if (leftn <= 0||rightn>switchNum)
//				{
//					break;
//				}
//				if (arr1[leftn] != arr1[rightn])
//					break;*/
//
//				arr1[leftn] = arr1[leftn] == 0 ? 1 : 0;
//				arr1[rightn] = arr1[rightn] == 0 ? 1 : 0;
//
//					leftn--;
//					rightn++;
//
//
//			}
//		}
//
//
//	}
//
//	for (int t = 1; t <= switchNum; t++)
//	{
//		printf("%d ", arr1[t]);
//		if (t % 20 == 0)
//			printf("\n");
//	}
//
//
//
//
//	return 0;
//}


//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main() {
//	int n, m;
//	scanf("%d", &n);
//	vector<int> a(n + 1);
//	for (int i = 1; i <= n; i++) scanf("%d", &a[i]);
//	scanf("%d", &m);
//	while (m--) {
//		int s, k;
//		scanf("%d%d", &s, &k);
//		if (s == 1) for (int i = k; i <= n; i += k) a[i] = 1 - a[i];
//		else {
//			int l = k, r = k;
//			while (1 < l && r < n && a[l - 1] == a[r + 1]) l--, r++;
//			for (int i = l; i <= r; i++) a[i] = 1 - a[i];
//		}
//	}
//	for (int i = 1; i <= n; i++) {
//		printf("%d ", a[i]);
//		if (i % 20 == 0) printf("\n");
//	}
//	return 0;
//}

//#include <iostream>
//using namespace std;
//int main()
//{
//	int num;
//	int std;
//	int sex[101];
//	int stdnum[101];
//	int _switch[101] = { 0 };
//
//	int r, l;
//	int k;
//	scanf("%d", &num);
//
//	for (int i = 1; i <= num; i++) {
//		scanf("%d", &_switch[i]);
//	}
//
//	scanf("%d", &std);
//	
//	for (int i = 0; i < std; i++) 
//		scanf("%d %d", &sex[i], &stdnum[i]);
//
//
//	for (int i = 0; i < std; i++) {
//
//		k = stdnum[i];
//
//		if (sex[i] == 1) {
//			for (int j = k; j < num; j += k)
//			{
//				_switch[j] = _switch[j] == 0 ? 1 : 0;
//			}
//		}
//		else {
//			_switch[k] = _switch[k] == 0 ? 1 : 0;
//			r = k - 1;
//			l = k + 1;
//
//			while (_switch[r] == _switch[l])
//			{
//				_switch[r] = _switch[r] == 0 ? 1 : 0;
//				_switch[l] = _switch[l] == 0 ? 1 : 0;
//			}
//
//		}
//	}
//
//		for (int i = 1; i <= num; i++) {
//		printf("%d ", _switch[i]);
//		if (i % 20 == 0) printf("\n");
//	}
//
//	return 0;
//}



//backjoon 10926
//#include <iostream>
//#include <string>
//using namespace std;
//int main()
//{
//	string str;
//
//	getline(cin, str);
//
//	str = str + "??!";
//	cout << str;
//
//
//
//
//	return 0;
//}

//backjoon 2711
//#include <iostream>
//#include<string>
//using namespace std;
//int main()
//{
//	int num;
//	char strr[81];
//	int errornum;
//	scanf("%d", &num);
//
//	string str[1000];
//
//	for (int i = 0; i < num; i++)
//	{
//		scanf("%d%s", &errornum, strr);
//
//		str[i] = strr;
//		str[i].erase(str[i].begin() + errornum - 1);
//
//	}
//
//	for (int i = 0; i < num; i++)
//	{
//		printf("%s\n", str[i].c_str());
//	}
//
//	return 0;
//}


//backjoon 7600
//#include <iostream>
//#include <string>
//#include<algorithm>
//#include <memory.h>
//using namespace std;
//int main()
//{
//	int i=0;
//	string str[250];
//	int alpabet[26] = { 0 };
//	int sum = 0;
//	//getline(cin,str[i]);
//
//	//for (int k = 0; k < str[0].length(); k++)
//	//{
//	//	printf("%c", (int)str[0].at(k));
//	//}
//	int c=0;
//	while (1)
//	{
//		getline(cin, str[i]);
//		if (str[i] == "#") {
//			str[i].clear();
//	
//			break;
//		}
//	
//		transform(str[i].begin(), str[i].end(), str[i].begin(), (int(*)(int))tolower);
//	
//	
//		i++;
//	}
//	
//	//	for (int j = 0; j< i; j++)
//	//{
//	//	printf("%s\n", str[j].c_str());
//	//}
//
//	for (int j = 0; j < i; j++) {
//		for (int k = 0; k < str[j].length(); k++)
//		{
//			if (str[j].at(k)  <= 122 && str[j].at(k) >= 97) {
//				alpabet[str[j].at(k) - 97] = 1;
//			/*	printf("check");*/
//			}
//		}
//
//	/*	for (int a = 0; a < 26; a++) {
//			printf("%d", alpabet[a]);
//		}*/
//
//		for (int a = 0; a < 26; a++)
//		{
//			sum += alpabet[a];
//		}
//		printf("%d\n", sum);
//		sum = 0;
//		memset(alpabet, 0, 26 * sizeof(int));
//
//	}
//
//
//
//
//	return 0;
//}

//1100
//#include <iostream>
//#include<algorithm>
//#include <stdio.h>
//using namespace std;
//int main()
//{
//	char chess[8][8] = {'.'};
//	int sum = 0;
//
//
//
//	for (int i = 0; i < 8; i++)
//	{
//		for (int j = 0; j < 8; j++) {
//			scanf("%c", &chess[i][j]);
//		}
//		getchar();
//	}
//
//	for (int i = 0; i < 8; i++)
//	{
//		if (i % 2 ==0) {
//			for (int j = 0; j < 8; j += 2) {
//				if (chess[i][j] == 'F') {
//					sum++;
//				}
//			}
//		}
//
//		else if(i%2==1){
//			for (int k = 1; k < 8; k += 2) {
//				if (chess[i][k] == 'F') {
//					sum++;
//	
//				}
//			}
//		}
//	}
//
//
//	printf("%d\n", sum);
//
//
//
//
//	return 0;
//}

////1718
//#include <iostream>
//#include<string>
//#include <algorithm>
//#define MAX 30000
//using namespace std;
//
//int main()
//{
//	string psword;
//	string str;
//	string psword1="";
//	char result[MAX] = {0};
//	int n;
//
//	getline(cin, str);
//	/*printf("%s", str.c_str());*/
//
//	
//	getline(cin, psword);
//
//	//scanf("%s", &str);
//	//getchar();
//	//scanf("%s", &psword);
//	
//	n = str.length() / psword.length();
//
//
//	for (int i = 0; i <= n; i++) {
//		psword1 +=psword;
//	}
//
//	//printf("%s", psword1.c_str());
//	//printf("%s", str.c_str());
//	for (int i = 0; i < str.length(); i++) {
//		if (str[i] == ' ')
//		{
//			result[i] = ' ';
//			continue;
//		}
//
//		result[i] = str[i] - psword1[i];
//		if (result[i] <= 26 && result[i] > 0) {
//			result[i] += 96;
//		}
//		else if (result[i] <= 0)
//			result[i] += 122;
//	}
//	//for (int i = 0; i < psword.length(); i++) {
//	//	printf("%d\n", str[i]-psword[i]);
//
//	//}
//	
//	for (int j = 0; j < str.length(); j++)
//	{
//		printf("%c", result[j]);
//	}
//
//
//
//
//	return 0;
//}


//11944
//#include <iostream>
//#include <algorithm>
//#include <string>
//using namespace std;
//int main() {
//
//	string st;
//	char temp[1001];
//	int m;
//	string str="";
//	int n;
//	int check = 0;
//
//	scanf("%s", temp);
//	st = temp;
//	scanf("%d", &m);
//
//	n = atoi(st.c_str());
//
//	/*printf("%d\n", n);*/
//
//	for (int i = 0; i < n*st.length(); i++)
//	{
//		str += temp[i%st.length()];
//		if (str.length() > m) {
//			check = 1;
//			break;
//		}
//	}
//
//
//	if (check == 1) {
//		for (int i = 0; i < m; i++) {
//			printf("%d", str[i] - '0');
//		}
//	}
//	else
//		for (int i = 0; i < n * st.length(); i++) {
//			printf("%d", str[i] - '0');
//		}
//
//	return 0;
//}



//2037
//#include <stdio.h>
//#include <iostream>
//#include <string>
//#include <string.h>
//#include <algorithm>
//
//using namespace std;
//int main() {
//
//	int p, w;
//	string string1;
//	char board[8][4] = { {'A','B','C','0'},{'D','E','F','0'},{'G','H','I','0'},{'J','K','L','0'},{'M','N','O','0'},{'P','Q','R','S'},{'T','U','V','0'},{'W','X','Y','Z'} };
//	int total_time = 0;
//	int chk=99;
//	int space = -2;
//	int len = 0;
//	int s = 0;
//
//	scanf("%d%d", &p, &w);
//	cin.ignore();
//	getline(cin, string1);
//	/*scanf("%[^\n]s", string1);*/
//
//
//	/*while (!string1[s] == '\0') {
//		s++;
//	}*/
//
//	/*printf("%s", string1.c_str());*/
//
//	
//	for (int i = 0; i < string1.size(); i++) {
//
//		if (string1[i] == ' '/*&&i!=(space+1)*/) {
//			total_time += p;
//			space = i;
//			chk = -2;
//			continue;
//		}
//
//		/*else if (string1[i] == ' ' && i == (space + 1)) {
//			chk = -2;
//			space = i;
//			continue;
//		}*/
//
//		for (int j = 0; j <8; j++) {
//		
//			for (int k = 0; k < 4; k++) {
//
//				if (string1[i] == board[j][k]) {
//					if (chk == j) {
//						total_time += w;
//					}
//					chk = j;
//					total_time += (p*(k+1));
//				}
//
//
//			}
//		}
//
//	}
//
//	/*for (int j = 0; j < 8; j++) {
//
//		for (int k = 0; k < 4; k++) {
//
//
//			printf("%c", board[j][k]);
//
//
//		}
//	}*/
//
//	printf("%d", total_time);
//
//
//	return 0;
//}




//#include <iostream>
//#include <string>
//#include <algorithm>
//using namespace std;
//
//
//int main()
//{
//	int i=0;
//	string str[1000];
//	bool chk[1000];
//
//	fill_n(chk, 1000, true);
//	
//
//	while (1)
//	{
//		getline(cin, str[i]);
//
//		if (str[i] == "0")
//			break;
//
//		int len=str[i].length();
//
//		for (int j = 0; j < len/2; j++) {
//			if (str[i].at(j) != str[i].at(len - j - 1)) {
//				chk[i] = false;
//			}
//		}
//
//		i++;
//
//	}
//
//	for (int j = 0; j < i; j++) {
//		if (chk[j] == true)
//		{
//			printf("yes\n");
//		}
//		else
//			printf("no\n");
//	}
//
//	return 0;
//}


////16360
//#include <iostream>
//#include <string>
//#include <algorithm>
//using namespace std;
//int main() {
//
//	string str[30];
//	int n;
//	int len;
//
//	scanf("%d", &n);
//
//	getchar();
//
//	for (int i = 0; i < n; i++) {
//		getline(cin, str[i]);
//	
//	}
//
//	for (int i = 0; i < n; i++)
//	{
//		len = str[i].length();
//	
//		switch (str[i].at(len-1)) 
//		{
//		case 'a':
//			str[i].push_back('s');
//			break;
//
//		case 'i':
//			str[i].append("os");
//			break;
//		case 'l':
//			str[i].append("es");
//			break;
//
//		case 'o':
//			str[i].push_back('s');
//			break;
//
//		case 'r':
//			str[i].append("es");
//			break;
//
//		case 't':
//			str[i].append("as");
//			break;
//
//		case 'u':
//			str[i].push_back('s');
//			break;
//
//		case 'v':
//			str[i].append("es");
//			break;
//
//		case 'w':
//			str[i].append("as");
//			break;
//
//		case 'y':
//			str[i].pop_back();
//			str[i].append("ios");
//			break;
//
//		case 'n':
//			str[i].pop_back();
//			str[i].append("anes");
//			break;
//		
//		case 'e':
//			if (str[i].at(len - 2) == 'n')
//			{
//				str[i].erase(len - 2, len);
//				str[i].append("anes");
//			}
//			else {
//				str[i].append("us");
//			}
//			break;
//		default:
//			str[i].append("us");
//			break;
//		}
//
//	}
//
//	for (int h = 0; h < n; h++)
//	{
//		printf("%s\n", str[h].c_str());
//	}
//
//
//	return 0;
//}

//6550 못품
//#include<iostream>
//#include <algorithm>
//#include <string>
//#include <vector>
//#include <sstream>
//using namespace std;
//int main() {
//
//	vector<string> x;
//	x.clear();
//	string str[10001];
//	bool ok[10001];
//	string stringBuffer;
//	int chk = 0;
//	int i = 0;
//
//	fill_n(ok, 10001, true);
//
//	while (1) {
//		getline(cin, str[i]);
//		getchar();
//	/*	
//		if (str[i].c_str() == "stop")
//			break;*/
//		i++;
//		if (i == 4)
//			break;
//	}
//	
//	for (int j = 0; j < i; j++) {
//
//		istringstream ss(str[j]);
//		while (getline(ss, stringBuffer, ' ')) {
//			x.push_back(stringBuffer);
//
//			for (int k = 0; k < x[0].size(); k++) {
//				for (int l = chk; l < x[1].size(); l++) {
//					if (x[0].at(k) == x[1].at(l)) {
//						chk = l;
//						continue;
//					}
//
//					else if (l == x[1].size() - 1) {
//						ok[j] = false;
//						break;
//					}
//
//				}
//			}
//		}
//	}
//
//	for (int j = 0; j < i; j++) {
//		if (ok[j] == true) {
//			printf("yes\n");
//		}
//		else
//			printf("no\n");
//	}
//
//
//	return 0;
//}

//1543
//#include<iostream>
//#include <string>
//#include <algorithm>
//using namespace std;
//int main() {
//
//	string str1;
//	string str2;
//	string temp1;
//	int len2;
//	int len1;
//	int result=0;
//
//	getline(cin, str1);
//	getline(cin, str2);
//
//	len1 = str1.length();
//	len2 = str2.length();
//	for (int i = 0; i < len1;)
//	{
//		temp1 = str1.substr(i,len2);
//
//		if (temp1.compare(str2) == 0)
//		{
//		/*	temp1 = "";*/
//			i += len2;
//			result++;
//		}
//		else
//			i++;
//	}
//	printf("%d", result);
//
//
//	return 0;
//}



//2609
//#include<iostream>
//#include <string>
//#include <algorithm>
//using namespace std;
//int maxcd(int a, int b) {
//	int r=1;
//	
//	while (1) {
//		r = b % a;
//		if (r == 0) {
//			return a;
//			break;
//		}
//		
//		b = a;
//		a = r;
//	}
//	
//}
//int main() {
//
//	int n1, n2;
//	int tmp;
//	scanf("%d%d", &n1, &n2);
//
//
//	if (n1 > n2) {
//		tmp = n1;
//		n1 = n2;
//		n2 = tmp;
//	}
//
//	printf("%d\n", maxcd(n1, n2));
//	printf("%d\n", n1 * n2 / maxcd(n1, n2));
//
//
//
//	return 0;
//}



//9613
//#include<iostream>
//#include <string>
//#include <algorithm>
//#include <vector>
//using namespace std;
//int maxcd(int a, int b) {
//
//	int temp;
//	if (a > b) {
//		temp = a;
//		a = b;
//		b = temp;
//	}
//	int r=1;
//	
//	while (1) {
//		r = b % a;
//		if (r == 0) {
//			return a;
//			break;
//		}
//		
//		b = a;
//		a = r;
//	}
//	
//}
//int main() {
//
//	int t;
//	int n;
//	long long int sum[101] = {0};
//	int num;
//
//	scanf("%d", &t);
//
//	for (int i = 0; i < t; i++) {
//		scanf("%d", &n);
//		vector<int> x(n);
//		for (int j = 0; j < n; j++) {
//			scanf("%d", &x[j]);
//	
//		}
//
//		if (n == 1) {
//			sum[i] +=(long long int)x[0];
//		}
//		else {
//			for (int k = 0; k < n; k++) {
//				for (int l = k + 1; l < n; l++) {
//					sum[i] += (long long int)maxcd(x[k], x[l]);
//				}
//			}
//		}
//		x.clear();
//	}
//
//
//	for (int i = 0; i < t; i++) {
//		printf("%lld\n", sum[i]);
//	}
//
//
//	return 0;
//}


//14490
//#include<iostream>
//#include <string>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
//int maxcd(int a, int b) {
//
//	int temp;
//	if (a > b) {
//		temp = a;
//		a = b;
//		b = temp;
//	}
//	int r=1;
//	
//	while (1) {
//		r = b % a;
//		if (r == 0) {
//			return a;
//			break;
//		}
//		
//		b = a;
//		a = r;
//	}
//	
//}
//
//int main() {
//	string str;
//	string result = "";
//	vector<string>v(2);
//	string sub1, sub2;
//	int a;
//	int div;
//	int num1, num2;
//
//	getline(cin, str);
//	a=str.find(':');
//
//	sub1 = str.substr(0, a);
//	sub2 = str.substr(a+1, str.length());
//	
//
//	num1 = stoi(sub1);
//	num2 = stoi(sub2);
//
//	div = maxcd(num1, num2);
//	num1 = num1 / div;
//	num2 = num2 / div;
//
//	sub1 = to_string(num1);
//	sub2 = to_string(num2);
//	result =sub1+':'+sub2;
//	printf("%s", result.c_str());
//	//printf("%d %d", num1, num2);
//
//}



//#include<iostream>
//#include <algorithm>
//#include <functional>
//#define MAX 1000000
//using namespace std;
//bool desc(int a, int b) {
//	return a > b;
//}
//int a[MAX];
//
//int main() {
//
//	int n;
//	//ios_base::sync_with_stdio(0);
//	//cin.tie(0);
//	scanf("%d", &n);
//	
//
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//
//	sort(a, a + n, greater<int>());
//
//	for (int i = 0; i < n; i++)
//	{
//		printf("%d\n", a[i]);
//	}
//	return 0;
//}


////11728
//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//#define MAX 2000000
//vector <int> v;
//int main()
//{
//	int n, m;
//	int k;
//	scanf("%d%d", &n, &m);
//
//	
//
//	for (int i = 0; i < n + m; i++)
//	{
//		scanf("%d", &k);
//	/*	getchar();*/
//		v.push_back(k);
//	}
//
//
//	sort(v.begin(), v.end());
//
//	for (int i = 0; i < (n + m); i++)
//	{
//		printf("%d ", v.at(i));
//	}
//
//	return 0;
//}


////2246
//#include <iostream>
//#include <algorithm>
//#include  <vector>
//using namespace std;
//int arr[10000] = { 0 };
//bool cmp(const pair<int, int>& a, const pair<int, int >& b) {
//	return a.second < b.second;
//}
//int main()
//{
//	vector<pair <int, int>> condo;
//	int n, c, d;
//	int result = 0;
//	bool check = true;
//	scanf("%d", &n);
//
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d%d", &c,&d);
//		condo.push_back(pair<int, int>(c, d));
//	}
//
//	//sort(condo.begin(), condo.end());
//	/*printf("\n");
//	for (int i = 0; i < n; i++)
//	{
//		printf("%d %d\n", condo[i].first, condo[i].second);
//	}*/
//
//	
//	for (int i = 0; i < n; i++) {
//		check = true;
//		for (int j = 0; j < n; j++) {
//
//			if (i == j)
//				continue;
//			if (condo[i].first > condo[j].first && condo[i].second >= condo[j].second)
//			{
//				check=false;
//			}
//
//			else if (condo[i].second > condo[j].second && condo[i].first >= condo[j].first)
//				check = false;
//		}
//
//		if (check)
//			result += 1;
//	}
//
//
//
//	printf("%d", result);
//	return 0;
//}

//2204
//#include <iostream>
//#include <algorithm>
//#include  <vector>
//#include <string>
//#include <cctype>
//#include <cstring>
//#include <stdio.h>
//using namespace std;
//bool cmp(const pair<string, string>& a, const pair <string, string>& b) {
//	return a.second < b.second;
//}
//vector<pair<string, string>> str;
//int main()
//{
//	char c[100];
//	string s[100];
//	int n;
//	
//	int i = 0;
//	int cnt = 0;
//
//	while (1) {
//		scanf("%d", &n);
//		getchar();
//
//		if (n == 0)
//			break;
//		
//		for (int i = 0; i < n; i++) {
//			scanf("%s", c);
//			str.push_back(pair<string,string>(c,c));
//		}
//
//
//		for (int i = 0; i < n; i++) {
//		
//			transform(str[i].second.begin(), str[i].second.end(), str[i].second.begin(), ::tolower);
//
//		}
//
//		for (int i = 0; i < n; i++) {
//			sort(str.begin(), str.end(), cmp);
//		}
//			
//		s[cnt++] = str[0].first;
//		
//		str.clear();
//
//
//	}
//
//	for (int i = 0; i < cnt; i++)
//	{
//		printf("%s\n", s[i].c_str());
//	}
//
//
//
//	return 0;
//}




////11650
//#include <iostream>
//#include <algorithm>
//#include  <vector>
//#include <string>
//using namespace std;
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int a, b;
//	vector<pair<int, int>>v;
//
//	for (int i = 0; i < n; i++) {
//		scanf("%d%d", &a, &b);
//		v.push_back({ a, b });
//	}
//
//
//	sort(v.begin(), v.end());
//
//	for (int i = 0; i < n; i++) {
//		printf("%d %d\n", v[i].first, v[i].second);
//	}
//
//
//	return 0;
//}
//


////5648
//#include <iostream>
//#include <algorithm>
//#include  <vector>
//#include <string>
//using namespace std;
//
//int main()
//{
//	int n;
//	vector <long long> ll;
//	string str;
//	int num;
//	int l;
//	scanf("%d", &n);
//	vector<string>v(n);
//	for (int i = 0; i < n; i++) {
//		cin >> str;
//		
//		l = str.length() - 1;
//
//		while(str[l] == '0')
//		{
//			l--;
//		}
//		str = str.substr(0, l + 1);
//
//		reverse(str.begin(), str.end());
//		ll.push_back(stoll(str));
//			
//	}
//
//	sort(ll.begin(), ll.end());
//
//
//	for (int i = 0; i < n; i++) {
//		printf("%lld\n", ll[i]);
//	}
//
//
//	return 0;
//}

////1764
//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//using namespace std;
//vector<string> str;
//bool binarySearch(int low, int high, string name) {
//	if (low > high) {
//		return false;
//	}
//
//	else {
//		int mid = (low + high) / 2;
//
//		if (!str[mid].compare(name))
//			return true;
//
//		else if (str[mid] > name)
//			return binarySearch(0, mid - 1, name);
//
//		else
//			return binarySearch(mid + 1, high, name);
//	}
//}
//
//vector<string> result;
//int ii[500000] = {0 };
//int main()
//{
//	int n, m;
//	int cnt = 0;
//	scanf("%d%d", &n, &m);
//	int l = 0;
//
//	for (int i = 0; i < n; i++) {
//		string name; 
//		cin>> name;
//		str.push_back(name);
//
//	}
//
//	sort(str.begin(), str.end());
//
//	for (int i = 0; i < m; i++) {
//		string name;
//		cin >> name;
//
//		if (binarySearch(0, str.size() - 1, name))
//			result.push_back(name);
//	}
//	
//	sort(result.begin(), result.end());
//
//
//	printf("%d\n", result.size());
//	for (int i = 0; i < result.size(); i++) {
//		cout << result[i] << '\n';
//	}
//
//	return 0;
//}


//11497
//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//vector <int>v;
//
//int result[100000];
//int main() {
//
//	int t,n;
//	int num;
//	scanf("%d", &t);
//
//	for (int i = 0; i < t; i++) {
//
//		scanf("%d", &n);
//		for (int j = 0; j < n; j++) {
//			scanf("%d", &num);
//			v.push_back(num);
//
//		}
//
//		sort(v.begin(), v.end());
//		/*for (int k = 0; k < n; k++) {
//			printf("%d ", v[k]);
//		}
//		printf("\n");*/
//
//
//		int maxnum;
//		result[i] = 0;
//		for (int l = 2; l < n; l++) {
//			maxnum = v[l] - v[l - 2];
//			result[i] = max(result[i], maxnum);
//		}
//		v.clear();
//	}
//
//	for (int i = 0; i < t; i++) {
//		printf("%d\n", result[i]);
//	}
//	return 0;
//}



//10989
//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//vector <int>v; 
//int arr[10001] = { 0, };
//int main()
//{
//	
//	int n,k;
//	scanf("%d", &n);
//
//	for (int i = 0; i < n; i++) {
//		scanf("%d", &k);
//		arr[k]++;
//	}
//
//	//sort(v.begin(), v.end());
//
//	for (int l = 1; l <= 10000; l++) {
//	/*	for (int i = 0; i < arr[l]; i++) {
//			printf("%d\n", l);
//		}*/
//		if (arr[l] != 0)
//		{
//			for (int i = 0; i < arr[l]; i++)
//			{
//				printf("%d\n", l);
//			}
//		}
//		else
//			continue;
//	}
//
//
//
//	return 0;
//}

//2167
//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//int arr[301][301];
//int sum1[10001] = {0, };
//using namespace std;
//int main()
//{
//	int n, m;
//	int k;
//	scanf("%d%d", &n, &m);
//	int a, b, c, d;
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//
//	scanf("%d", &k);
//	for (int i = 0; i < k; i++)
//	{
//
//		scanf("%d%d%d%d", &a, &b, &c, &d);
//		a--;
//		b--; 
//		c--; 
//		d--;
//		for (int l = a; l <= c; l++) {
//			 
//			for (int j = b; j <= d; j++) {
//				sum1[i] += arr[l][j];
//			}
//
//		}
//	
//	}
//
//
//	for (int i = 0; i < k; i++) {
//		printf("%d\n", sum1[i]);
//	}
//
//
//
//	return 0;
//}


////10798
//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int main()
//{
//	vector<string> m;
//	char c[5][15];
//	string result = "";
//	int max1 = 0;
//	for (int i = 0; i < 5; i++)
//	{
//		string s;
//		cin >> s;
//		m.push_back(s);
//		int a = s.size();
//		max1 = max(max1,a);
//		//printf("%d\n", m[i].size());
//	}
//
//	int j = 0;
//
//	/*for (int i = 0; i < 5; i++)
//	{
//		printf("%s\n", m[i].c_str());
//		
//	}*/
//	for (int i = 0; i < 5; i++)
//	{
//		int r = max1 - m[i].size();
//		if (r> 0) {
//			for (int j = 0; j < r; j++)
//				m[i].push_back(' ');
//		}
//
//	}
//	
//	for (int i = 0; i < max1; i++)
//	{
//		for (j = 0; j < 5; j++) {
//			if (m[j][i] == ' ')
//				continue;
//			result += m[j][i];
//		}
//	}
//
//
//	printf("%s\n", result.c_str());
//
//
//	return 0;
//}



//1037
//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//using namespace std;
//int main()
//{
//	int n,k;
//
//
//	scanf("%d", &n);
//
//	vector <int>v;
//	for (int i = 0; i < n; i++) {
//		scanf("%d", &k);
//		v.push_back(k);
//	}
//
//	sort(v.begin(), v.end());
//
//	printf("%d", v[0] * v[v.size()-1]);
//
//
//
//
//
//	return 0;
//}





////1978
//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//#include <cmath>
//using namespace std;
//int arr[1001] = { 1,1,0, };
//int main()
//{
//	int n;
//	int num;
//	int cnt = 0;
//
//	scanf("%d", &n);
//
//	for (int j = 2; j <= sqrt(1000); j++)
//	{
//		for (int i = j + j; i <= 1000; i += j) {
//			if (arr[i]) continue;
//			arr[i] = true;
//		}
//	}
//	for (int i = 0; i < n; i++) {
//		scanf("%d", &num);
//		if (!arr[num])
//			cnt++;
//	}
//
//	//for (int i = 0; i <= 1000; i++)
//	//	if(!arr[i])
//	//	printf("%d  ", i);
//	
//	printf("%d", cnt);
//
//
//	return 0;
//}


////8979
//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//#include <cmath>
//using namespace std;
//vector <vector<int>> arr(1000,vector<int>(4,0));
//vector <int>v2;
//bool cmp(const vector<int>& a, const vector<int> &b) {
//
//	if (a[1] == b[1])
//	{
//		if (a[2] == b[2])
//			return a[3] > b[3];
//		else
//			return a[2] > b[2];
//
//	}
//		return a[1] > b[1];
//	
//	
//
//
//}
//int main() {
//
//	int n, k;
//	int a, b, c, d;
//	scanf("%d%d", &n, &k);
//
//	/*	arr.push_back(v2);*/
//
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < 4; j++) {
//			cin >> arr[i][j];
//	}
//		
//	}
//
//	sort(arr.begin(), arr.end(),cmp);
//
//
//	for (int i = 0; i < n; i++) {
//
//
//
//		if (arr[i][0] == k) {
//			
//				printf("%d", i + 1);
//		}
//
//	}
//
//
//
//
//	return 0;
//}


////1268
//#include <iostream>
//#include <algorithm>
//#include <vector>
//#include <cmath>
//using namespace std;
//int arr[1001][10] = {0,};
//int check[1001] = { 0, };
//int main()
//{
//
//	int n;
//	scanf("%d", &n);
//
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= 5; j++) {
//			scanf("%d", &arr[i][j]);
//		}
//	}
//
//
//	/*printf("asdasdasdasdasd");*/
//	//for (int i = 0; i < n; i++)
//	//{
//	//	for (int j = 0; j < 5; j++) {
//	//		printf("%d  ", check[i][j]);
//	//	}
//	//	printf("\n");
//	//}
//	int cnt = 0;
//
//
//	for (int i = 1; i <= n; i++) { 
//		for (int j = 1; j <= n; j++) { 
//			for (int k = 1; k <= 5; k++) { 
//				if (arr[i][k] == arr[j][k]) {
//					check[i]++;
//					break;
//				}
//			}
//		}
//	}
//
//	int max = 0;
//	int max_student = 0;
//	for (int i = 1; i <= n; i++) {
//		if (check[i] > max) {
//			max = check[i];
//			max_student = i;
//		}
//	
//		else if (check[i] == max) {
//			if (max_student > i) {
//				max_student = i;
//			}
//		}
//	}
//
//	printf("%d", max_student);
//	return 0;
//
//
//
//}



////17363
//#include <iostream>
//#include <algorithm>
//#include <vector>
//#include <cmath>
//#include <map>
//#include <string>
//
//using namespace std;
//
//char mat[100][100];
//
//int main(void) {
//	ios_base::sync_with_stdio(false);
//	cin.tie(nullptr);
//
//	map<char, char> mp;
//	mp['.'] = '.';
//	mp['O'] = 'O';
//	mp['-'] = '|';
//	mp['|'] = '-';
//	mp['/'] = '\\';
//	mp['\\'] = '/';
//	mp['^'] = '<';
//	mp['<'] = 'v';
//	mp['v'] = '>';
//	mp['>'] = '^';
//
//	int n, m;
//	cin >> n >> m;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			cin >> mat[i][j];
//		}
//	}
//
//	for (int i = m - 1; i >= 0; i--) {
//		for (int j = 0; j < n; j++) {
//			cout << mp[mat[j][i]];
//		}
//		cout << '\n';
//	}
//	cout << '\n';
//
//	return 0;
//}


//#include<iostream>
//#include<algorithm>
//#include <vector>
//#include <cmath>
//using namespace std;
//
//#define N 9
//
//int add(const int* arr) {
//    int sum = 0;
//    for (int i = 0; i < N; i++) {
//        sum += arr[i];
//    }
//    return sum;
//}
//
//
//int function1(int* arr) {
//    int sum = add(arr);
//
//    for (int i = 0; i < N - 1; i++) {
//        for (int j = i + 1; j < N; j++) {
//            if (sum - (arr[i] + arr[j]) == 100) {
//                arr[i] = -1;
//                arr[j] = -1;
//                return 0;
//            }
//        }
//    }
//
//    return -1;
//}
//
//int main(void) {
//
//    int arr[N];
//    for (int i = 0; i < N; i++) {
//        cin >> arr[i];
//    }
//
//
//    function1(arr);  
//
//    sort(arr, arr + N); 
//
//    for (int i = 2; i < N; i++) {
//        cout << arr[i] << endl;
//    }
//
//    return 0;
//}

//#include <iostream>
//#include <algorithm>
//using namespace std;
//bool cmp(const int &a, const int &b ) {
//
//    return a > b;
//
//
//
//
//}
//void swap(int& a, char& b)
//{
//    int temp = a;
//    a = b;
//    b = temp;
//}
//
//void permutation(int data[], int depth, int n, int r)
//{
//    if (depth == r)
//    {
//     
//        sort(data, data + r, cmp);
//          for (int i = 0; i < r; i++)
//           cout << data[i] << " ";
//       cout << endl;
//        return;
//    }
//
//    for (int i = depth; i < n; i++)
//    {
//        swap(data[depth], data[i]);  
//        permutation(data, depth + 1, n, r);  
//        swap(data[depth], data[i]);  
//    }
//}
//
//int main()
//{
//   
//    int arr[100];
//    int n;
//    scanf("%d", &n);
//
//    for (int i = 0; i < n; i++)
//    {
//        arr[i] = i + 1;
//    }
//    permutation(arr, 0, n, 3); // 4P3
//
//
//    return 0;
//}


//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//void recursion(int n,int m)
//{
//	int i;
//	for (int j = 0; j < m; j++) {
//		printf("____");
//	}
//
//	printf("\"재귀함수가 뭔가요?\"\n");
//	
//	if (n == 0) {
//		for (int j = 0; j < m; j++) {
//			printf("____");
//		}
//	
//		printf("\"재귀함수는 자기 자신을 호출하는 함수라네\"\n");
//		for (int j = 0; j < m; j++) {
//			printf("____");
//		}
//
//		printf("라고 답변하였지.\n");
//		return;
//	}
//
//	else {
//
//	for (int j = 0; j < m; j++) {
//		printf("____");
//	}
//	printf("\"잘 들어보게. 옛날옛날 한 산 꼭대기에 이세상 모든 지식을 통달한 선인이 있었어.\n");
//	for (int j = 0; j < m; j++) {
//		printf("____");}
//
//	printf("마을 사람들은 모두 그 선인에게 수많은 질문을 했고, 모두 지혜롭게 대답해 주었지.\n");
//	
//	for (int j = 0; j < m; j++) {
//		printf("____");}
//
//	printf("그의 답은 대부분 옳았다고 하네. 그런데 어느 날, 그 선인에게 한 선비가 찾아와서 물었어.\"\n");
//
//	recursion(n - 1, m + 1);
//
//	for (int j = 0; j < m; j++) {
//		printf("____");
//	}
//	printf("라고 답변하였지.\n");
//	}
//
//}
//int main()
//{
//	int n;
//
//	scanf("%d", &n);
//	printf("어느 한 컴퓨터공학과 학생이 유명한 교수님을 찾아가 물었다.\n");
//
//	recursion(n , 0);
//
//
//
//	return 0;
//}



////6603
//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//vector<int> arr;
//bool visited[50] = { false, };
//bool cc[50] = { false, };
//int check = 0;
//void recursion(vector<int> arr,int start, int cnt, int idx, bool visited[]) {
//
//	/*printf("recursion 불러오기: \n");*/
//
//
//	if (idx == cnt) {
//	
//			for (int i = 0; i < 50; i++) {
//				if (visited[i] == true) {
//					printf("%d ", arr[i]);
//				}
//
//			}
//			printf("\n");
//			return;
//		
//	
//	}
//
//
//	for (int i = start; i < arr.size(); i++) {
//		if (visited[i] == true)
//			continue;
//		
//		else {
//			visited[i] = true; 
//			recursion(arr, i+1, cnt, idx+1, visited);
//			visited[i] = false;
//
//		}
//	}
//
//	return;
//}
//int main()
//{
//	int k = 1;
//	int num;
//	while (1) {
//		scanf("%d", &k);
//		if (k == 0)
//			break;
//		for (int i = 0; i < k; i++) {
//			scanf("%d", &num);
//			arr.push_back(num);
//		}
//		sort(arr.begin(), arr.end());
//
//		//printf("%d\n", arr.size());
//		recursion(arr,0, 6, 0, visited);
//		printf("\n");
//		arr.clear();
//	}
//
//
//	return 0;
//}


////1759
//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//int L, C;
//int a_cnt=0,b_cnt=0;
//bool visited[30] = { false, };
//vector <char> c;
//vector <char>res;
//
//void password(int l, int start, int end,vector <char> c) {
//
//	if (a_cnt >= 1 && b_cnt >= 2 && L == end) {
//
//		
//		for (int i = 0; i <l; i++) {
//			cout << res[i];
//		}
//		cout << "\n";
//		
//	
//	}
//
//	else {
//		for (int i = start; i < C; i++) {
//			if (!visited[i]) {
//				visited[i] = true;
//				if (c[i] == 'a' || c[i] == 'e' || c[i] == 'i' || c[i] == 'o' || c[i] == 'u')
//					a_cnt++;
//				else
//					b_cnt++;
//				
//				
//					res[end] = c[i];
//
//					password(l, i + 1, end + 1, c);
//				
//		
//				visited[i] = false;
//				if (c[i] == 'a' || c[i] == 'e' || c[i] == 'i' || c[i] == 'o' || c[i] == 'u')
//					a_cnt--;
//				else
//					b_cnt--;
//				
//			}
//		}
//	}
//
//}
//
//
//
//int main() {
//	char alpabet;
//	cin >>L;
//	cin >> C;
//
//	for (int i = 0; i < C; i++) {
//		cin>>alpabet;
//		c.push_back(alpabet);
//	}
//
//	res.resize(L+1);
//	sort(c.begin(), c.end());
//
//
//	password(L, 0, 0,c);
//
//	return 0;
//}





//#include <iostream>
//#include <algorithm>
//#include <vector>
//#include<string>
//#include<string.h>
//using namespace std;
//bool check[10000] = {false, };
//int num = 0;
//vector<string> ss;
//int cnt=0;
//void printv(vector<char>a) {
//	for (int i = 0; i < a.size(); i++) {
//		printf("%c", a[i]);
//	}
//	printf("\n");
//}
//
//void eraseB(vector<char> b) {
//	
//}
//void ABAB(vector<char> s, vector<char> t, vector<char>temp) {
//	 int i;
//	 if (s.size() >= t.size()) {
//		 for (i = 0; i < s.size(); i++) {
//			 if (s[i] != t[i])
//				 break;
//
//		 }
//		 if (i == s.size()) {
//			 check[num++] = true;
//			 return;
//		 }
//		 else {
//			 check[num++] = false;
//		/*	 printf("시발\n");
//			 return ABAB(s, temp, temp);*/
//		 }
//	 }
//
//	 if (t.size() == 0)
//		 return;
//	 
//	
//	 if (t.front() == 'B' && t.back() == 'A') {
//		 temp.clear();
//		/* printf("둘 다 포함될 때\n");*/
//		/* for (int i = 0; i < t.size(); i++) {
//			 temp.push_back(t[i]);
//		 }
//		 temp.pop_back();*/
//		 
//		  for (int i = 0; i < t.size(); i++) {
//			 ss[cnt]+=t[i];
//		 }
//		 temp.pop_back();
//		 if (t.front() == 'B') {
//			 /*printf("둘다 포함, 앞이 b일때 \n");*/
//			 reverse(t.begin(), t.end());
//			 t.pop_back();
//			/* printv(t);*/
//			 return ABAB(s, t, temp);
//			 t.push_back('B');
//			 reverse(t.begin(), t.end());
//		 }
//
//		 if (t.back() == 'A') {
//			
//			/* printf("둘다 포함, 뒤가 a일때 \n");*/
//			
//		/*	 printv(t);*/
//
//			 return ABAB(s, t, temp);
//		 }
//	 }
//
//	 else if (t.back() == 'A') {
//		 /*printf("뒤가 a일때 \n");*/
//		 t.pop_back();
//		/* printv(t);*/
//
//		 return ABAB(s, t, temp);
//	 }
//	 else if (t.front() == 'B') {
//		/* printf("앞이 b일때 \n");*/
//		 reverse(t.begin(), t.end());
//		 t.pop_back();
//		/* printv(t);*/
//		 return ABAB(s, t,temp);
//	 }
//
//
//	
//	else {
//	/*	 printf("조건이 다 아닐때 temp출력\n");*/
//		 
//		/* printv(temp);*/
//	
//		 return ABAB(s, temp, temp);
//	 }
//
//
//	 //t.push_back('B');
//	 //reverse(t.begin(), t.end());
//	 //return ABAB(s, t, temp);
//
//}
//
//int main(void) {
//
//	vector<char> s;
//	vector<char> t;
//	vector<char> temp;
//
//	char s1[50];
//	char t1[50];
//
//	scanf("%s", &s1);
//	scanf("%s", &t1);
//
//	for (int i = 0; i < strlen(s1); i++) {
//		s.push_back(s1[i]);
//	
//	}
//	
//	for (int i = 0; i < strlen(t1); i++) {
//		t.push_back(t1[i]);
//	}
//
//	//printv(s);
//	//printv(t);
//	ABAB(s, t,temp);
//
//	int k;
//	//for (int i = 0; i < 1000; i++) {
//	//	printf("%d", check[i]);
//	//}
//	//printf("\n");
//
//	for (k= 0; k < 1000; k++) {
//		if (check[k] == true) {
//			printf("1\n");
//			break;
//		}
//		else {
//			continue;
//		}
//	}
//
//	if (k == 1000)
//		printf("0");
//
//
//
//	return 0;
//}


////2447
//#include<iostream>
//#include <algorithm>
//#include <string>
//#include <string.h>
//#include <vector>
//using namespace std;
//
//void star(int x, int y, int n)
//{
//	if (((x /n) % 3 == 1) && (((y/n)  % 3) == 1))
//		printf(" ");
//	else {
//		if (n == 1)
//			printf("*");
//		else
//		 star(x, y, (n /3));
//	}
//}
//
//int main()
//{
//	int n;
//	int x, y;
//
//	cin >> n;
//	
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			star(j, i, n);
//		}
//		cout << "\n";
//	}
//
//
//	return 0;
//}


//1780
//#include <iostream>
//#include <algorithm>
//#include<string>
//#include <vector>
//using namespace std;
//int N;
//int k[2187][2187];
//int m1 = 0, p1 = 0, zer = 0;
//void checkColorPaper(int startX,int startY, int x, int y,int size) {
//	int check,boool=1;
//
//	for (int i = startY; i < y; i++) {
//
//		for (int j = startX; j < x; j++) {
//			printf("%d ", k[i][j]);
//		}
//		printf("\n");
//	}
//	printf("\n");
//
//
//	if (size==1) {
//		if (k[startY][startX] == -1)
//			m1++;
//		else if (k[startY][startX] == 0)
//			zer++;
//		else if (k[startY][startX] == 1)
//			p1++;
//		return;
//	}
//
//	check = k[startY][startX];
//	for (int i = startY; i < y; i++) {
//		
//		for (int j = startX; j < x; j++) {
//			if (check != k[i][j]) {
//				boool = 0;
//				checkColorPaper(0, 0, x ,y / 3,N/3);
//				checkColorPaper(x/3, 0, 2*x / 3, y / 3, N / 3);
//				checkColorPaper(2*x / 3, 0,  x , y / 3,  N / 3);
//
//				checkColorPaper(0, y/3, x / 3, 2*y / 3,  N / 3);
//				checkColorPaper(x / 3, y/3, 2 * x / 3, 2*y / 3,  N / 3);
//				checkColorPaper(2 * x / 3, y/3, x, 2*y / 3,  N / 3);
//
//				checkColorPaper(0, 2*y / 3, x / 3, y,  N / 3);
//				checkColorPaper(x / 3, 2*y / 3, 2 * x / 3,  y , N / 3);
//				checkColorPaper(2 * x / 3, 2*y / 3, x, y ,  N / 3);
//				break;
//			}
//		}
//		if (boool == 0) {
//			break;
//			return;
//		}
//	}
//	/*if()*/
//	if (boool == 1) {
//		for (int i = startY; i < y; i++) {
//			for (int j = startX; j < x; j++) {
//				if (k[i][j] == -1)
//					m1++;
//				else if (k[i][j] == 0)
//					zer++;
//				else if (k[i][j] == 1)
//					p1++;
//			}
//		}
//		return;
//	}
//	return;
//}
//int main() {
//	cin >> N;
//
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < N; j++) {
//			scanf("%d", &k[i][j]);
//		}
//	}
//
//	checkColorPaper(0, 0, N, N,N);
//
//	cout << m1 <<endl;
//
//	cout << zer << endl;
//	cout << p1 << endl;
//
//
//	return 0;
//}


//#include <iostream>
//#include<vector>
//#include <string>
//#include<algorithm>
//using namespace std;
//int N, ans = 0, temp_num = 0, len = 0, _max_num;
//vector<int>num;
//
//vector<int>select_num;
//bool visited[10];
//void make_big_num(int cnt, int max_cnt) {
//	if (cnt == max_cnt) {
//		int temp_num = 0;
//		for (int i = 0; i < max_cnt; i++) {
//			temp_num += (select_num[i] * pow(10, max_cnt - 1 - i));
//		}
//
//		if (temp_num <= _max_num) {
//			ans = max(ans, temp_num);
//		}
//		return;
//	}
//
//	for (int i = 0; i < N; i++) {
//		if (!visited[i]) {
//			select_num[cnt] = num[i];
//			make_big_num(cnt + 1, max_cnt);
//		}
//	}
//
//
//}
//int main()
//{
//	string max_num;
//	cin >> max_num >> N;
//	for (int i = 0; i < N; i++) {
//		int a;
//		cin >> a;
//		num.push_back(a);
//	}
//
//	len = max_num.size();
//	_max_num = stoi(max_num);
//
//	select_num.resize(len + 1, 0);
//
//	for (int i = 1; i <= len; i++) {
//		make_big_num(0, i);
//	}
//	cout << ans;
//
//	return 0;
//}


////1074
//#include <iostream>
//#include<vector>
//#include <string>
//#include<algorithm>
//#include <math.h>
//using namespace std;
//int N, r, c, ans = 0;
//
//void z(int x, int y, int n) {
//	if (x == r && y == c) {
//		cout<<ans;
//		return;
//	}
//
//	if (r < x + n && r >= x && c < y + n && c >= y) {
//		z(x, y, n / 2);
//		z(x, y + n/2, n / 2);
//		z(x + n/2, y, n / 2);
//		z(x + n/2, y + n/2, n / 2);
//	}
//	else
//		ans += n * n;
//}
//
//int main()
//{
//	scanf("%d%d%d", &N, &r, &c);
//	N = pow(2, N * 2);
//	z(0, 0, N);
//
//
//
//
//	return 0;
//}


//#include <iostream>
//#include<vector>
//#include <string>
//#include<algorithm>
//#include <math.h>
//using namespace std;
//
//string bkt;
//int cnt2 = 0, cnt3 = 0,ans;
//
//int bkt_val(int begin_idx, int end_idx) {
//	if (begin_idx > end_idx) return 1;
//	int val = 0;
//	int start_idx = begin_idx;
//	int no_cnt2 = 0;
//	int no_cnt3 = 0;
//
//	for (int i = begin_idx; i <= end_idx; i++) {
//		char cur_bkt = bkt[i];
//		if (cur_bkt == '(') no_cnt2++;
//		else if (cur_bkt == ')') no_cnt2--;
//		else if (cur_bkt == '[') no_cnt3++;
//		else if (cur_bkt == ']') no_cnt3--;
//
//		if ((no_cnt2 < 0) || (no_cnt3 < 0))
//			return 0;
//
//		if ((no_cnt2 == 0) && (no_cnt3 == 0))
//		{
//			if (bkt[start_idx] == '(')
//				val += 2 * bkt_val(start_idx + 1, i - 1);
//			else
//				val += 3 * bkt_val(start_idx + 1, i - 1);
//			start_idx = i + 1;
//		}
//
//	}
//
//	if ((no_cnt2 != 0) || (no_cnt3 != 0))
//		return 0;
//	else
//		return val;
//
//}
//int main()
//{
//	cin >> bkt;
//	ans = bkt_val(0, bkt.size() - 1);
//	cout << ans;
//
//
//
//}


////1780
//#include <iostream>
//#include<vector>
//#include <string>
//#include<algorithm>
//#include <math.h>
//using namespace std;
//int N, m_cnt = 0, p_cnt = 0, z_cnt = 0;
//int _map[2187][2187];
//void cnt_paper(int n, int x, int y) {
//	if (n == 1)
//	{
//		if (_map[y][x] == -1)
//			m_cnt++;
//		else if (_map[y][x] == 0)
//			z_cnt++;
//		else
//			p_cnt++;
//		return;
//	}
//
//	for (int i = y; i < y + n; i++) {
//		for (int j = x; j < x + n; j++) {
//			if (_map[i][j] != _map[y][x])
//			{
//				for (int a = 0; a < 3; a++) {
//					for (int b = 0; b < 3; b++) {
//						cnt_paper(n / 3, x + (n / 3 * b), y + (n / 3 * a));
//					}
//				}
//				return ;
//			}
//		}
//	}
//
//	if (_map[y][x] == -1)
//		m_cnt++;
//	else if (_map[y][x] == 0)
//		z_cnt++;
//	else
//		p_cnt++;
//	return;
//}
//
//int main()
//{
//
//	cin >> N;
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < N; j++) {
//			cin >> _map[i][j];
//		}
//	}
//	cnt_paper(N, 0, 0);
//	cout << m_cnt << "\n" << z_cnt << "\n" << p_cnt;
//
//
//
//
//
//
//	return 0;
//}

////1920
//#include <iostream>
//#include <algorithm>
//#include<string>
//#include <vector>
//using namespace std;
//int N, M;
//int A[100000];
//int B[100000];
//int findNum(int left, int right,int b) {
//	int mid = (left + right) / 2;
//
//
//	if (A[mid] == b)
//		return 1;
//
//	else if(left > right)
//		return 0;
//
//		if (A[mid] < b)
//			return findNum(mid + 1, right, b);
//		else 
//			return findNum(left, mid - 1, b);
//		
//	
//}
//int main()
//{
//	cin >> N;
//
//	for (int i = 0; i < N; i++) {
//		cin >> A[i];
//	}
//	sort(A, A + N);
//	cin >> M;
//	for (int i = 0; i < M; i++) {
//		cin >> B[i];
//	}
//	for (int i = 0; i < M; i++) {
//		printf("%d\n", findNum(0,N-1,B[i]));
//	}
//
//
//	return 0;
//}




////2417
//#include <iostream>
//#include <algorithm>
//#include<string>
//#include <vector>
//#include <cmath>
//using namespace std;
////92233720000000000
//long long n;
//long long result;
//vector<long long>v;
//long long searchQ(long long start, long long end) {
//	long long mid = (start + end) / (long long)2;
//
//	if (start > end)
//		return result;
//
//	if (mid >= sqrt(n))
//	{
//		result= min(result, mid);
//		return searchQ(start, mid-1);
//	}
//
//	else 
//		return searchQ(mid + 1, end);
//	
//}
//int main()
//{
//	cin >> n;
//	result = n;
//
//	if (n == 0)
//		cout << 0;
//	else if (n == 1)
//		cout << 1;
//	else {
//		
//		cout<<searchQ(0, n - 1);
//	/*	cout << (long long)sqrtl(n)+1;*/
//	}
//	
//
//
//
//	return 0;
//}


//2776
/*
#include <iostream>
#include <algorithm>
#include<string>
#include <vector>
#include <cmath>
using namespace std;
vector <int>arr1;
vector<int>arr2;
int N, M;
int memory_test(int start, int end, int b) {
	int mid = (start + end) / 2;


	if (arr1[mid] == b)
		return 1;

	if (start > end)
		return 0;


	else if (arr1[mid] > b)
		return memory_test(start, mid - 1, b);
	else
		return memory_test(mid + 1, end, b);

}
int main()
{
	int testcase;
	int k;
	scanf("%d",& testcase);




	for (int j = 0; j < testcase; j++) {
		arr1.clear();
		arr2.clear();
		scanf("%d", &N);
		for (int i = 0; i < N; i++) {
			scanf("%d", &k);
			arr1.push_back(k);
		}
		sort(arr1.begin(), arr1.end());



		scanf("%d", &M);
		for (int i = 0; i < M; i++) {
			scanf("%d", &k);
			arr2.push_back(k);
		}

		for (int i = 0; i < M; i++) {
			printf("%d\n", memory_test(0, N - 1, arr2[i]));
		}
	}


	return 0;
}*/

////1654
//#include <iostream>
//#include <algorithm>
//#include<string>
//#include <vector>
//#include <cmath>
//#define ll long long
//using namespace std;
//int N, K;
//ll arr[10001];
//int cnt = 0;
//ll result=0;
//void wireCount(ll start, ll end) {
//	ll mid = (start + end) /(ll) 2;
//	if (mid == 0)
//		mid = 1;
//	cnt = 0;
//	if (start > end)
//		return;
//
//	for (int i = 0; i < K; i++) {
//		cnt += (int)arr[i] / mid;
//	}
//
//	 if (cnt >= N) {
//		result = max(result, mid);
//		wireCount(mid + 1, end);
//	}	
//	else {
//		wireCount(start, mid - 1);
//	}
//}
//int main() {
//	scanf("%d", &K);
//	scanf("%d", &N);
//
//
//	for (int i = 0; i < K; i++) {
//		scanf("%d", &arr[i]);
//	}
//	sort(arr,arr + K);
//	wireCount(0, arr[K-1]);
//
//	cout << result;
//
//	return 0;
//}
//

////10815
//#include <iostream>
//#include <algorithm>
//#include<string>
//#include <vector>
//#include <cmath>
//using namespace std;
//int N,M;
//vector<int>arr1;
//vector<int>arr2;
//int findCard(int start, int end, int card) {
//	int mid = (start + end) / 2;
//
//	if (start > end)
//		return 0;
//
//	if (card == arr1[mid])
//		return 1;
//
//	else if (card > arr1[mid]) 
//		return findCard(mid + 1, end, card);
//	else
//		return findCard(start, mid-1, card);
//	
//}
//int main() {
//	
//	scanf("%d", &N);
//	int k;
//	for (int i = 0; i < N; i++) {
//		scanf("%d", &k);
//		arr1.push_back(k);
//	}
//	//arr1.resize(N);
//	sort(arr1.begin(), arr1.end());
//	//printf("%d", arr1.size());
//	//for (int i = 0; i < N; i++) {
//
//	//	cout<<arr1[i]<<" ";
//	//}
//	scanf("%d", &M);
//	for (int i = 0; i < M; i++) {
//		scanf("%d", &k);
//		arr2.push_back(k);
//	}
//
//	
//	for (int i = 0; i < M; i++) {
//		printf("%d ",findCard(0, N - 1, arr2[i]));
//	}
//
//
//	return 0;
//}



//#include <iostream>
//#include <algorithm>
//#include<string>
//#include <vector>
//#include <cmath>
//using namespace std;
//long long N;
//long long arr[300000];
//int M;
//int result = 1;
//int find_min;
//int minimum_Jealousy() {
//
//
//	for (int i = 0; i < M; i++) {
//		for (int j = 1; j < arr[M - 1]; j++) {
//
//		
//				result += arr[i] / j;
//				if (result > N)
//					break;
//		}
//			find_min = min(result, find_min);
//	}
//}
//int main()
//{
//	scanf("%lld", &N);
//
//	scanf("%d", &M);
//
//	for (int i = 0; i < M; i++) {
//		scanf("%d", &arr[i]);
//	}
//
//	sort(arr, arr + M);
//
//	find_min = arr[M - 1];
//
//
//	return 0;
//}



////2110 시간초과
//#include <iostream>
//#include <algorithm>
//#include<string>
//#include <vector>
//#include <cmath>
//using namespace std;
//int N, C;
//long long int arr[200001];
//bool visited[200001] = { false, };
//long long int distanced=100000000000;
//int check;
//long long int value_arr[200001];
//int index=0;
//void max_distance(int start, int end) {
//	int first = 0;
//	long long int first_value;
//
//	if (end == C) {
//
//
//		for (int j = 0; j < N; j++) {
//			if ((visited[j] == true) && (first == 1))
//			{
//			
//				distanced=min((arr[j] - first_value),distanced);
//			
//				first_value = arr[j];
//			}
//			else if ((visited[j] == true) && (first == 0)) {
//				first_value = arr[j];
//				first = 1;
//			}
//		}
//		/*printf("%lld 거리출력\n", distanced);*/
//		value_arr[index] = distanced;
//		distanced= 100000000000;
//		index++;
//		return;
//	}
//
//
//	for (int i = start; i < N; i++) {
//		if (!visited[i]) {
//			visited[i] = true;
//			max_distance(start+1,end+1);
//			visited[i] = false;
//		}
//	}
//
//}
//int main() {
//
//	scanf("%d", &N);
//
//	scanf("%d", &C);
//
//	for (int i = 0; i < N; i++) {
//		scanf("%lld", &arr[i]);
//	}
//	sort(arr, arr + N);
//
//	max_distance(0, 0 );
//
//
//
//	sort(value_arr, value_arr + index);
//
//	//for (int i = 0; i < index; i++) {
//	//	cout << value_arr[i] <<"답배열" <<endl;
//	//}
//
//	//cout << "ㅈ까라";
//	cout << value_arr[index-1];
//	return 0;
//}

////2110 이분탐색 
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//int N, C;
//int arr[200001];
//
//int result;
//void max_distance(int left, int right)
//{
//	int mid = (left + right) / 2;
//	int first = arr[0];
//	int cnt = 1;
//
//	if (left > right)
//		return;
//
//
//	for (int i = 1; i < N; i++) {
//
//		if ((arr[i] - first) >= mid) {
//			cnt++;
//			first = arr[i];
//		}
//	}
//
//	if (cnt >= C) {
//		result = mid;
//		max_distance(mid + 1, right);
//	}
//	else {
//		
//		max_distance(left, mid-1);
//	}
//
//}
//int main()
//{
//	scanf("%d", &N);
//	scanf("%d", &C);
//	int l,r;
//
//	for (int i = 0; i < N; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	sort(arr, arr + N);
//
//	result = arr[N - 1];
//	//for (int i = 0; i < N; i++)
//	//{
//	//	printf("%d\n", arr[i]);
//	//}
//	max_distance(1, (arr[N - 1]-arr[0]));
//
//	cout << result;
//
//	return 0;
//}


////2792
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//int N, M;
//int arr[300001];
//int result;
//void jealousy(int left, int right) {
//
//	int mid = (left + right) / 2;
//	int cnt = 0;
//
//	if (left > right)
//		return;
//	
//	for (int i = 0; i < M; i++) {
//		cnt += arr[i] / mid ;
//		if (arr[i] % mid)
//			cnt += 1;
//	}
//
//	if (cnt > N) {
//		jealousy(mid + 1, right);
//	}
//
//	else {
//		result = mid;
//		jealousy(left, mid-1);
//	}
//
//
//}
//int main()
//{
//	scanf("%d", &N);
//	scanf("%d", &M);
//
//	for (int i = 0; i < M; i++) {
//		scanf("%d", &arr[i]);
//	}
//
//	sort(arr, arr + M);
//
//
//	jealousy(1, arr[M - 1]);
//
//
//
//	cout << result;
//
//
//	return 0;
//}
//


////2343
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//int N,M;
//int arr[100001];
//
//
//int result=0;
//void binary_search(int left, int right)
//{
//	int mid = (left + right) / 2;
//	int check = 0;
//	int blueray = 0;
//	int cnt = 1;
//	if (left > right)
//		return;
//
//	for (int i = 0; i < N; i++) {
//		if (arr[i] > mid) {
//			check = 1;
//			break;
//		}
//
//
//		blueray += arr[i];
//		if (blueray > mid)
//		{
//			cnt++;
//			blueray = arr[i];
//		}
//	}
//
//	if (check == 1)
//	{
//		binary_search(mid+1, right);
//	}
//	else if (cnt > M)
//	{
//		binary_search(mid + 1, right);
//	}
//	else {
//		result = min(result, mid);
//		binary_search(left, mid - 1);
//	}
//}
//
//int main()
//{
//	cin >> N;
//	cin >> M;
//	int total = 0;
//	for (int i = 0; i < N; i++) {
//		scanf("%d", &arr[i]);
//		total += arr[i];
//	}
//	result = total;
//	binary_search(1, total);
//	
//	cout << result;
//
//
//	return 0;
//}



////4030
//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include <cmath>
//using namespace std;
//
//int main()
//{
//	int a, b;
//	int left, right;
//	int cnt = 0;
//	int k = 1;
//	while (1) {
//		int check = 0;
//		scanf("%d%d", &a, &b);
//		cnt = 0;
//	
//		if (b == 0 &&a== 0)
//			break;
//		
//		for (int i = 1; i * i < b; i++)
//		{
//			if (i * i <= a)
//				continue;
//			int x = (i * i - 1)*2;
//			int y = sqrt(x);
//
//			if (y*(y+1)==x)
//				cnt++;
//		}
//
//		cout <<"case "<<k++<<": "<< cnt << endl;
//	}
//
//
//
//}



////11561
//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include <cmath>
//#define ull unsigned long long
//using namespace std;
//void binary_(ull n) {
//	ull left = 1;
//	ull right=sqrt(n) * 2;
//	ull result=0;
//	ull mid=0;
//	while (left <= right)
//	{
//		 mid=(left+right)/2;
//		if (mid * (mid + 1 )<= 2 * n)
//		{
//			result = max(mid, result);
//			left = mid + 1;
//		}
//		else
//			right = mid - 1;
//	}
//
//	cout << result << endl;
//}
//ull N;
//int T;
//int main()
//{
//	ull n;
//	scanf("%d", &T);
//	
//	for (int i = 0; i < T; i++) {
//		scanf("%lld", &n);
//		binary_(n);
//
//	}
//
//	return 0;
//}


//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include <cmath>
//using namespace std;
//vector<int> v;
//int N, M, L;
//
//int check(int mid) {
//	int cnt=0;
//
//	for (int i = 1; i < v.size(); i++) {
//		if ((v[i]-v[i-1]) % mid == 0)
//			cnt--;
//		cnt += (v[i]-v[i-1]) / mid;
//	}
//
//
//	if (M >= cnt)  //right= mid-1
//		return 0;
//	else
//		return 1;
//}
//int main()
//{
//	int k;
//	cin >> N >> M >> L;
//
//	for (int i = 0; i < N; i++)
//	{
//		scanf("%d", &k);
//		v.push_back(k);
//	}
//	v.push_back(0);
//	v.push_back(L);
//	sort(v.begin(), v.end());
//
//	int left = 1,right=L;
//
//	while (left <= right) {
//		int mid = (left + right) / 2;
//
//
//
//		if (check(mid)) {
//			left = mid+1;
//		}
//		else {
//			right = mid - 1;
//		}
//	}
//
//	cout << left;
//
//
//
//	return 0;
//}



////2748
//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//#define ll long long
//ll dp[100] = { 0, };
//ll fib(ll n) {
//
//	dp[0] = 0;
//	dp[1] = 1;
//
//	if (n < 2)
//		return dp[n];
//
//	else if (dp[n])
//		return dp[n];
//
//
//	else {
//		dp[n] = fib(n-1)+fib(n-2);
//
//	}
//	return dp[n];
//}
//int main()
//{
//	ll n;
//	cin >> n;
//
//	cout << fib(n)<<endl;
//
//
//
//
//
//
//	return 0;
//}


////1010
//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//#define ll long long
//ll com[30][30] = { -1, };
//int test;
//int N, M;
//
//void init() {
//	for(int i=0;i<30;i++)
//	fill(com[i] + 0, com[i] + 30, -1);
//}
//
//ll combination(int n, int r) {
//
//	if (n == r || r == 0) {
//		return 1;
//	}
//
//	else if (com[n][r] != -1)
//		return com[n][r];
//
//	return com[n][r]=combination(n - 1,r)+ combination(n - 1,r - 1);
//
//}
//int main()
//{
//	cin >> test;
//	init();
//	for (int i = 0; i < test; i++)
//	{
//		scanf("%d%d", &N, &M);
//		cout << combination(M, N)<<endl;
//
//	}
//	//for (int i = 0; i < 30; i++) {
//	//	for (int j = 0; j < 30; j++) {
//	//		cout << com[i][j];
//	//	}
//	//	cout << endl;
//	//}
//
//
//
//	return 0;
//}


//
////1932
//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//int n;
//int tri[500][500];
//int mem[500][500];
//int dfs() {
//
//	for (int i = n - 2; i >= 0; i--) {
//		for (int j = 0; j <= i; j++) {
//			mem[i][j] = max(mem[i + 1][j], mem[i + 1][j + 1])+tri[i][j];
//		}
//	}
//	//for (int i = 0; i < n; i++)
//	//{
//	//	for (int j = 0; j < n; j++) {
//	//		printf("%d ", mem[i][j]);
//
//	//	}
//	//	printf("\n");
//	//}
//	return mem[0][0];
//}
//
//int main() {
//
//	cin >> n;
//
//	for (int i = 0; i < n; i++)
//	{
//		for (int j =0; j < i + 1; j++) {
//			scanf("%d", &tri[i][j]);
//		}
//	}
//
//	cout << "tri" << endl;
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++) {
//			printf("%d ", tri[i][j]);
//
//		}
//		printf("\n");
//	}
//	for (int i = 0; i < n; i++) {
//		mem[n - 1][i] = tri[n - 1][i];
//	}
//
//	cout << dfs();
//
//	return 0;
//}



////9461
//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//unsigned long long mem[1000];
//int T;
//unsigned long long findP(int k) {
//	if (k <= 3)
//		return 1;
//
//	for (int i = 1; i <= k; i++) {
//		if (i <= 3) {
//			mem[i] = 1;
//			continue;
//		}
//		mem[i] = mem[i - 3] + mem[i - 2];
//
//	}
//
//	for (int i = 1; i <= k; i++) {
//		printf("%d \n", mem[i]);
//	}
//	return mem[k];
//}
//int main()
//{
//	int k;
//
//	cin >> T;
//
//	for (int i = 0; i < T; i++) {
//		scanf("%d", &k);
//		cout << findP(k) << endl;
//	}
//
//
//
//	return 0;
//}

//9461
//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//int divide3(int n)
//{
//	return n/3;
//}
//int divide2(int n)
//{
//	return n / 2;
//}
//
//int make_one(int n)
//{
//	if (n % 3 == 0)
//		return make_one(divide3(n));
//
//}
//int main()
//{
//
//
//
//
//
//
//
//
//
//
//	return 0;
//}


////9095
//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//int mem[1000] = {1,2,4,};
//int T, n;
//int sum123(int n) {
//	if (n == 1||n==2)
//		return n;
//	else if (n == 3) 
//		return 4;
//	else {
//		mem[n] = sum123(n - 1) + sum123(n - 2) + sum123(n - 3);
//	}
//	return mem[n];
//}
//int main()
//{
//	cin >> T;
//
//	for (int i = 0; i < T; i++) {
//		scanf("%d", &n);
//		cout << sum123(n) << endl;
//	}
//
//	return 0;
//}

////2193
//#include <iostream>
//#include <vector>
//#include <algorithm>
//int N;
//long long mem[100] = { 0 };
//using namespace std;
//long long prinary_number(int n) {
//	mem[1] = 1;
//	mem[2] = 1;
//
//
//	for (int i = 3; i <= n; i++)
//	{
//		mem[i] = mem[i - 1] + mem[i - 2];
//		
//	}
//
//	return mem[n];
//}
//int main()
//{
//	cin >> N;
//	printf("%lld\n", prinary_number(N));
//
//
//	return 0;
//}
// 


////1912
//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int N;
//vector<int> v;
//
//int findMaxNum() {
//	int max1=0;
//	int present=0;
//	int check = 0;
//	int min1 = v[0];
//	for (int i = 0; i < N; i++) {
//		if (v[i] < 0)
//			check++;
//		present += v[i];
//		max1 = max(max1,present);
//		if (present < 0)
//			present = 0;
//	}
//	if (check == N)
//	{
//		for (int i = 1; i < N; i++) {
//			min1 = max(min1, v[i]);
//		}
//		return min1;
//
//	}
//	else {
//		return max1;
//	}
//}
//int main(){
//
//	cin >> N;
//	int k;
//	
//	for (int i = 0; i < N; i++) {
//		scanf("%d", &k);
//		v.push_back(k);
//	}
//
//	cout << findMaxNum();
//return 0;
//}


//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//long mem[1000];
//long likePibo(int n)
//{
//	
//	for (int i = 0; i < n; i++) {
//		if (i == 0 || i == 1 || i == 2)
//			mem[i] = 1;
//		else {
//			mem[i] = mem[i - 1] + mem[i - 3];
//		}
//	}
//	return mem[n-1];
//}
//int main()
//{
//	long n;
//	cin >> n;
//	cout << likePibo(n);
//
//
//	return 0;
//}

////11726
//#include <iostream>
//#include <algorithm>
//#include <vector>
//#define ll long long
//using namespace std;
//ll mem[3000];
//int n;
//ll tile()
//{
//	mem[0] = 1;
//	mem[1] = 2;
//	for (int i = 2; i <	 n; i++) {
//		mem[i] =( mem[i - 1]+ mem[i - 2]) % 10007;
//	}
//	return mem[n-1];
//}
//int main()
//{
//	cin >> n;
//	cout << tile() ;
//
//}


////2579
//#include <iostream>
//#include<vector>
//#include <algorithm>
//#include<cmath>
//using namespace std;
//int mem[301] = { 0, };
//int stairs[301];
//int check[301];
//int n;
//
//int dp() {
//
//	mem[0] = stairs[0];
//	mem[1] = stairs[0] +stairs[1];
//	mem[2] = max(stairs[0],stairs[1])+stairs[2];
//	check[0] = 1;
//	check[1] = 1;
//	for (int i = 3; i < n; i++) {
//		mem[i] = max(mem[i-2]+stairs[i], mem[i - 3] + stairs[i - 1] + stairs[i]);
//	/*	cout << mem[i] <<endl;*/
//	}
//
//	return mem[n-1];
//}
//int main()
//{
//	cin >> n;
//
//	for (int i = 0; i < n; i++) {
//		scanf("%d", &stairs[i]);
//	}
//	cout<<dp()<<endl;
//
//
//
//	return 0;
//}




////17626
//#include <iostream>
//#include<vector>
//#include <algorithm>
//#include<cmath>
//using namespace std;
//int mem[50001];
//int n;
//int dp()
//{
//	mem[0] = 0;
//	mem[1] = 1;
//	for (int i = 2; i <= n; i++) {
//		mem[i] = mem[i - 1] + 1;
//		for (int j = 1; j * j <= i; j++) {
//			if (i == j * j) {
//				mem[i] = 1;
//				continue;
//			}
//			mem[i] = min(mem[i],1 + mem[i - j * j]);
//		}
//	}
//
//	//for (int i = 0; i < n; i++)
//	//	cout << i<<": "<<mem[i] << endl;
//	return mem[n];
//}
//int main()
//{
//	cin >> n;
//	cout << dp();
//
//
//	return 0;
//}


////11048
//#include <iostream>
//#include<vector>
//#include <algorithm>
//#include<cmath>
//using namespace std;
//int dp[1002][1002];
//int miro[1002][1002];
//int N, M;
//int max_candy()
//{
//	dp[0][0] = miro[0][0];
//	for (int i = 1; i < N; i++)
//	{
//			dp[i][0] = dp[i-1][0]+miro[i][0];
//	}
//	for (int j = 1; j < M; j++)
//	{
//		dp[0][j] = dp[0][j-1] + miro[0][j];
//	}
//	for (int i = 1; i < N; i++)
//	{
//		for (int j = 1; j < M; j++) {
//			dp[i][j] = max(dp[i][j - 1], dp[i - 1][j]);
//			dp[i][j] = max(dp[i][j], dp[i - 1][j - 1]);
//			dp[i][j] += miro[i][j];
//		}
//	}
//
//	return dp[N-1][M-1];
//}
//int main()
//{
//	cin >> N >> M;
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < M; j++) {
//			cin >> miro[i][j];
//		}
//	}
//	cout << max_candy();
//
//
//
//	return 0;
//}


////1890
//#include <iostream>
//#include<vector>
//#include <algorithm>
//#include<cmath>
//using namespace std;
//int N;
//int pass[101][101];
//long long dp[101][101] = { 0, };
//long long countPass()
//{
//	int cp;
//	dp[0][0] = 1;
//	for (int i = 0; i < N; i++)
//	{
//		for (int j = 0; j < N; j++)
//		{
//			if (pass[i][j] == 0)
//				break;
//			if (dp[i][j] == 0)
//				continue;
//			//if (i + pass[i][j] >= N && j + pass[i][j] >= N)
//			//	continue;
//
//			if (i + pass[i][j] < N) {
//			dp[i + pass[i][j]][j] += dp[i][j];
//			}
//
//			if (j + pass[i][j] < N) {
//	
//				dp[i][j + pass[i][j]] += dp[i][j];
//			}
//		}
//	}
//	//cout << endl;
//	//for (int i = 0; i < N; i++)
//	//{
//	//	for (int j = 0; j < N; j++)
//	//	{
//	//		cout << dp[i][j] << " ";
//	//	}
//	//	cout << endl;
//	//}
//
//	return dp[N - 1][N - 1];
//
//}
//int main()
//{
//	cin >> N;
//
//	for (int i = 0; i < N; i++)
//	{
//		for (int j = 0; j < N; j++) {
//			cin >> pass[i][j];
//		}
//	}
//	cout << countPass();
//
//
//
//	return 0;
//}



////1965
//#include <iostream>
//#include<vector>
//#include <algorithm>
//#include<cmath>
//using namespace std;
//int n;
//int mem[1001] = { 0, };
//int box[1001];
//int dp()
//{
//	int maxbox = 1;
//	int result = 0;
//	mem[0] = 1;
//	
//	//for (int i = 0; i < n; i++) {
//	//	cout << mem[i]<<" ";
//	//}
//	//cout << endl;
//	for (int i = 0; i < n; i++) {
//		mem[i] = 1;
//		for (int j = 0; j <= i; j++) {
//			if (box[j] < box[i])
//			{
//				mem[i] = max(mem[j] + 1,mem[i]);
//			}
//		}
//
//		result = max(result, mem[i]);
//	}
//
//	//for (int i = 0; i < n; i++) {
//	//	cout << mem[i]<<" ";
//	//	}
//	//
//
//	//cout << endl;
//	return result;
//
//}
//int main()
//{
//	cin >> n;
//
//	for (int i = 0; i < n; i++)
//		cin >> box[i];
//
//	cout << dp();
//	return 0;
//}



////10164
//#include <iostream>
//#include<vector>
//#include <algorithm>
//#include<cmath>
//using namespace std;
//int N, M,k;
//int arr[20][20];
//int mem[20][20] = {0,};
//int dp() {
//	int result;
//	int middle=0;
//	int last=1;
//	int visit = 0;
//	mem[0][0] = 1;
//	int check=0;
//	for (int i = 0; i < N; i++) {
//		mem[i][0] = 1;
//	}
//	for (int j = 0; j < M; j++)
//		mem[0][j] = 1;
//
//	//for (int i = 0; i < N; i++)
//	//{
//	//	for (int j = 0; j < M; j++) {
//	//		cout << mem[i][j] << " ";
//	//	}
//	//	cout << endl;
//	//}
//
//	for (int i =0; i < N; i++)
//	{
//		for (int j = 0; j < M; j++) {
//
//			check++;
//
//			if (i == 0 || j == 0)
//				continue;
//				//if(i+1<N)
//				mem[i][j] += mem[i-1][j];
//				//if(j+1<M)
//				mem[i][j] += mem[i][j-1];
//		
//
//			if (check==k)
//			{
//	
//				middle = mem[i][j];
//		/*		cout << middle<<"\n";*/
//				mem[i][j] = 1;
//				for (int x = i+1; x < N; x++) {
//					mem[x][j] = 1;
//				}
//				for (int y = j+1; y < M; y++) {
//					mem[i][y] = 1;
//				}
//				i++;
//				
//			}
//
//		}
//	}
//
//	if (middle == 0)
//		return mem[N - 1][M - 1];
//	else
//		return middle * mem[N - 1][M - 1];
//
//}
//int main()
//{
//	cin >> N >> M >> k;
//
//	cout << dp();
//
//	return 0;
//}


////12865
//#include <iostream>
//#include<vector>
//#include <algorithm>
//#include<cmath>
//using namespace std;
//int N, K;
//vector <pair <int, int>> p;
//bool cmp(const pair <int, int >a, const pair<int, int>b) {
//	return a.second > b.second;
//}
//
//int max_value() {
//	int max_num=1;
//
//	for (int i = 0; i < N; i++) {
//		for (int j = i + 1; j < N; j++) {
//			p[]
//		}
//	}
//
//}
//int main()
//{
//	int a, b;
//	cin >> N >> K;
//
//	for (int i = 0; i < N; i++) {
//		scanf("%d%d", &a, &b);
//		p.push_back(pair<int, int>(a, b));
//	}
//
//	sort(p.begin(), p.end(), cmp);
//	for (int i = 0; i < N; i++) {
//		printf("%d %d\n", p[i].first, p[i].second);
//
//	}
//
//	return 0;
//}


////10828
//#include<iostream>
//#include<stack>
//#include<vector>
//#include <algorithm>
//#include <string>
//using namespace std;
//stack<int> stk;
//int main()
//{
//	int n;
//	cin >> n;
//	
//	string str;
//
//	while (n > 0) {
//
//		cin >> str;
//
//		if (str == "push")
//		{
//			int num;
//			cin >> num;
//			stk.push(num);
//		}
//
//		else if (str == "pop")
//		{
//			if (!stk.empty())
//			{
//				int k = stk.top();
//				cout << k<<"\n";
//				stk.pop();
//			}
//			else {
//				cout << -1<<endl;
//			}
//
//		}
//
//		else if (str == "size") {
//		
//			cout << stk.size()<<"\n";
//		}
//
//		else if (str == "empty")
//		{
//			if (stk.empty())
//				cout << 1<<endl;
//			else {
//				cout << 0 << endl;
//			}
//		}
//
//		else if (str == "top")
//		{
//			if (stk.empty())
//				printf("-1\n");
//		
//			else {
//				printf("%d\n", stk.top());
//			}
//		}
//		
//		n--;
//
//	}
//
//
//
//
//	return 0;
//}




////15815
//#include<iostream>
//#include<stack>
//#include<vector>
//#include <algorithm>
//#include <string>
//using namespace std;
//stack<int> st;
//stack <int>number;
//stack <char> ch;
//int main()
//{
//	string str;
//	cin >> str;
//	int check = 0;
//	number.push(1);
//	int a;
//	int b;
//	char oper;
//
//	for (int i =0; i <= str.size() - 1; i++) {
//
//		if (((str[i] - '0') >= 0) && ((str[i] - '0') < 10))
//		{
//			number.push(str[i] - '0');
//			printf("%d\n", number.top());
//		}
//		
//		else {
//			if (str[i] == '*')
//			{
//				a = number.top();
//				number.pop();
//				b = number.top();
//				number.pop();
//				number.push(a * b);
//				printf("%d\n", number.top());
//			}
//
//			else if (str[i] == '/')
//			{
//				b = number.top();
//				number.pop();
//				a = number.top();
//				number.pop();
//				number.push(a / b);
//				printf("%d\n", number.top());
//			}
//
//			else if (str[i] == '+') {
//				a = number.top();
//				number.pop();
//				b = number.top();
//				number.pop();
//
//				number.push(a + b);
//				printf("%d\n", number.top());
//			}
//
//			else if (str[i] == '-' )
//			{
//				b = number.top();
//				number.pop();
//				a = number.top();
//				number.pop();
//				number.push(a - b);
//				printf("%d\n", number.top());
//			}
//		}
//
//	}
//
//	printf("%d", number.top());
//
//	return 0;
//}



////10845
//#include<iostream>
//#include<queue>
//#include<vector>
//#include <algorithm>
//#include <string>
//using namespace std;
//queue <int> q;
//int main()
//{
//
//	int n;
//	cin >> n;
//	string str;
//	int a;
//	while (n > 0)
//	{
//		cin >> str;
//
//		if (str == "push")
//		{
//			cin >> a;
//			q.push(a);
//
//		}
//
//		else if (str == "pop")
//		{
//			if (q.size() == 0)
//			{
//				printf("-1\n");
//			}
//			else {
//				a = q.front();
//				q.pop();
//				printf("%d\n", a);
//			}
//		}
//
//		else if (str == "front")
//		{
//			if (q.size() == 0)
//			{
//				printf("-1\n");
//			}
//			else
//			printf("%d\n", q.front());
//
//		}
//		else if (str == "size")
//		{
//
//				printf("%d\n", q.size());
//			
//		}
//		else if (str == "empty")
//		{
//			if (q.size() == 0)
//				printf("1\n");
//			else {
//				printf("0\n");
//			}
//
//		}
//
//		else if (str == "back")
//		{
//			if (q.size() == 0)
//			{
//				printf("-1\n");
//			}
//			else
//			printf("%d\n", q.back());
//		}
//
//		n--;
//	}
//
//
//	return 0;
//}



////2164
//#include<iostream>
//#include<queue>
//#include<vector>
//#include <algorithm>
//#include <string>
//using namespace std;
//queue <int> q;
//
//void makeQ(int n) {
//
//	for (int i = 1; i <= n; i++)
//	{
//		q.push(i);
//	}
//
//}
//
//int main()
//{
//	int n;
//	int temp;
//	cin >> n;
//
//	makeQ(n);
//
//	while (q.size() > 1)
//	{
//		q.pop();
//		if (q.size() != 1) {
//			temp = q.front();
//			q.pop();
//			q.push(temp);
//		}
//
//	}
//
//	cout << q.front();
//
//	return 0;
//}
//



////10866
//#include<iostream>
//#include<queue>
//#include<vector>
//#include <algorithm>
//#include <string>
//#include <deque>
//using namespace std;
//
//deque <int> deq;
//int main()
//{
//	int n,a;
//	string str;
//
//	cin >> n;
//
//	while (n > 0) {
//
//		cin >> str;
//
//		if (str == "push_back") {
//	
//			cin >> a;
//			deq.push_back(a);
//		}
//
//		else if (str == "push_front") {
//				cin >> a;
//			deq.push_front(a);
//		}
//
//		else if (str == "pop_front") {
//			if (deq.size() == 0)
//			{
//				cout << -1 << endl;
//			}
//			else
//			{
//				cout<<deq.front()<<endl;
//				deq.pop_front();
//			}
//		}
//		else if (str == "pop_back")
//		{
//			if (deq.size() == 0)
//			{
//				cout << -1 << endl;
//			}
//			else {
//				cout << deq.back()<<endl;
//				deq.pop_back();
//			}
//		}
//		else if (str == "size") {
//			cout << deq.size() << endl;
//
//		}
//		else if (str == "empty") {
//
//			if (deq.empty()) {
//				cout << 1 << endl;
//			}
//			else
//				cout << 0 << endl;
//		}
//
//		else if (str == "front") {
//			if (deq.size() == 0)
//				cout << -1 << endl;
//			else
//				cout << deq.front() << endl;
//		}
//		else if (str == "back") {
//			if (deq.size() == 0)
//				cout << -1 << endl;
//			else
//				cout << deq.back() << endl;
//		}
//
//
//		n--;
//	}
//
//
//
//	return 0;
//}