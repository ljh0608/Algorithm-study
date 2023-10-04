#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;
int t,n,k;
int apt[15][15]={0,};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> t;

    for(int i=0;i<15;i++){
        apt[0][i]=i+1;
    }

    for(int i=1;i<15;i++){
        apt[i][0]=1;
    }

     
    for(int i=1;i<15;i++){
        for(int j=1;j<15;j++){
            apt[i][j]=apt[i-1][j]+apt[i][j-1];
        }
    }



    for(int i=0;i<t;i++){
        cin >>k>>n;

        cout <<apt[k][n-1]<<"\n";
    }
    return 0;
}