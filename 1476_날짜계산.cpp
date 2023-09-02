#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include<math.h>
using namespace std;
    


int E,S,M;

int rangeE=15;
int rangeS=28;
int rangeM=19;

int main(void){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> E>>S>>M;	
	long long i=1;
	if(E==1 &&S==1&&M==1){
		cout<<1;
	}
	else {
while(1){
		
		int a=i%rangeE+1;
		int b=i%rangeS+1;
		int c=i%rangeM+1;

		if(a==E  && b==S&& c==M){
			cout <<i+1<<"\n";
			// cout<<"check1";
			break;
		}
		i++;

	}
	}
	


    return 0;
}