#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;
int t;
int dp[42];




int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >>t ;
      dp[0]=0;
      dp[1]=1;

    for(int j=2;j<=41;j++){
            dp[j]=dp[j-1]+dp[j-2];
          }

    for(int i=0;i<t;i++){
        cin>>n;
        if(n==0){
            cout <<"1 0"<<"\n";
        }
        else if (n==1){
            cout<<"0 1"<<"\n";
        }
        else{
      
          cout <<dp[n-1] <<" "<<dp[n]<<"\n";
        }
    }
    
    return 0;
}