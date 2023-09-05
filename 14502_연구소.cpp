#include<iostream>
#include<cstring>
#include<vector>
using namespace std;
int dx[4] = { 0,0,1,-1 };
int dy[4] = { 1,-1,0,0 };

int N,M;
int graph[10][10];
int graph2[10][10];
int virus[64][2];
int num=0;
    int res=0;
    int maxnum=0;
void dfs(int x,int y ) {

	for (int i = 0; i < 4; i++) { //현재 좌표에서 상하좌우를 확인하는 for문
		int nx = x + dx[i];
		int ny = y + dy[i];
		
		if (nx >= 1 && ny >= 1 && nx < N+1 && ny < M+1) { //좌표가 배열에서 벗어나는지 확인
			if (!graph2[nx][ny]) { 
                graph2[nx][ny]=2;
				dfs(nx, ny); 
			}
		}
	}

    return ;
}

int main() {

    int x1,x2,x3,y1,y2,y3;   
    cin >>N>>M;
    
    for( int i=1;i<=N;i++){
        for(int j=1;j<=M;j++){
            cin>>graph[i][j];
            graph2[i][j]=graph[i][j];

            if(graph[i][j]==2){
                virus[num][0]=i;
                virus[num][1]=j;
                num++;
            }
        }
    }
    for(int i=0;i<N*M;i++){
        x1=i/M+1;
        y1=i%M+1;

       
        if(!graph2[x1][y1]){
            for(int j=i+1;j<N*M;j++){
                x2=j/M+1;
                y2=j%M+1;
                  
                  if(!graph2[x2][y2]){
                      for(int k=j+1;k<N*M;k++){
                        x3=k/M+1;
                        y3=k%M+1;

                        if(!graph2[x3][y3]){
                            graph2[x1][y1]=1;
                            graph2[x2][y2]=1;
                            graph2[x3][y3]=1;

                            for(int p=0;p<num;p++){
                                dfs(virus[p][0],virus[p][1]);
                            }   


                         int cnt=0;
                            for(int p=1;p<=N;p++){
                                for(int q=1; q<=M;q++){
                                    if(!graph2[p][q])
                                        cnt++;
                                    }
                                 }
                                    maxnum=max(maxnum,cnt);

                                 for(int p=1;p<=N;p++){
                                for(int q=1; q<=M;q++){
                                    graph2[p][q]=graph[p][q];
                                   
                                }
                            }

                        }
                       }
                     }
            }
          
        }
    }
`
        cout<<maxnum;

    return 0;
}