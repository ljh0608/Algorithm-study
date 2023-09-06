#include<iostream>
#include<cstring>
#include<vector>
using namespace std;
int n,m;
vector<int> v;
int res=0;

void calcSum (int start){

    if(start==n){
        return ;
    }

    int sum=0;
    for(int i=start; i<v.size();i++){

        sum+=v[i];
        if(sum==m){
            res++;
            break;
        }
    }

    

}

int main() {
    cin >> n>>m;
    int tmp;
    for(int i=0;i<n;i++){
        cin >> tmp;
        v.push_back(tmp);
    }


    for(int i=0;i<v.size();i++){
        calcSum(i);
    }

    cout <<res;
    return 0;
}