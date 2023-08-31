#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include<math.h>
using namespace std;

int N;
bool check[22]={0};
int stat[21][21];
int res=1e9;
void dfs(int cnt, int pos){


    if(cnt==N/2){
        int start=0, link=0;
        for(int i=1;i<=N;i++){
            for(int j=1; j<=N;j++){
                if(check[i]&&check[j]){
                    start+=stat[i][j];
                }

                if(!check[i]&&!check[j]){
                    link+=stat[i][j];
                }
            }
        }

        res=min(res,abs(start-link));
        return ;
    }

    for(int i=pos; i<N;i++){
        check[i]=true;
        dfs(cnt+1,i+1);
        check[i]=false;
    }
}
    



int main(void){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
    cin >>N;

    for(int i=1;i<=N;i++){
        for(int j=1;j<=N;j++){
            cin>>stat[i][j];
        }
    }

    dfs(0,1);

    cout <<res;
    return 0;
}