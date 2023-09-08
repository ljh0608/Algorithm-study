#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

#define input_max 8 + 1

int a[input_max];
int selected[input_max];
bool visited[input_max];

int result=0;
int n;
int sum;
void calcMax(){
    sum=0;
    for(int i=0;i<n-1;i++){
        sum+= abs(selected[i]-selected[i+1]);
    }

    result=max(result,sum);
    
}

void dfs(int depth){

    if(depth==n){
        calcMax();
        return ;
    }

    for(int i=0;i<n;i++){
        if(visited[i])
            continue;
        visited[i]=true;
        selected[depth]=a[i];
        dfs(depth+1);
        visited[i]=false;
    }
}
int main() {

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

    cin >>n;

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    dfs(0);
    cout<< result;


	return 0;
}