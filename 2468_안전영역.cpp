#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;
int N;
int des[101][101];

int area=0;

void detectSafe(int vs[][101], int x, int y, int surface ){ //vs[][N]
     if(vs[x-1][y]==0 &&des[x-1][y]>=surface){
        vs[x-1][y]=1;
        detectSafe(vs,x-1,y,surface);
     }
     
       if(vs[x+1][y]==0 &&des[x+1][y]>=surface){
        vs[x+1][y]=1;
        detectSafe(vs,x+1,y,surface);
    }

      if(vs[x][y-1]==0 &&des[x][y-1]>=surface){
        vs[x][y-1]=1;
        detectSafe(vs,x,y-1,surface);
     }
       if(vs[x][y+1]==0 &&des[x][y+1]>=surface){
        vs[x][y+1]=1;
        detectSafe(vs,x,y+1,surface);
     }

}
   
void calcSafeZone(int surface, int idx, int idy, int trigger){
    int visited[101][101]={0};
    int safe[101][101]={0};
    int res=0;
    for(int i=1;i<N+1;i++){
        for(int j=1;j<N+1;j++){
            if(des[i][j]>=surface){
                safe[i][j]=1;
           
            }
        }
    }

    for(int i=1;i<N+1;i++){
        for(int j=1;j<N+1;j++){
             if(safe[i][j]){
                     if(visited[i-1][j]==0 &&visited[i+1][j]==0&& visited[i][j-1]==0 &&visited[i][j+1]==0 ){
                    res++;
                }
                detectSafe(visited,i,j,surface);
                visited[i][j]++;
              
                }
        }
    }
    area=max(area,res);
   
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin>> N;
    for(int i=1;i<N+1;i++){
        for(int j=1;j<N+1;j++){
            cin>>des[i][j];
        }
    }

 for(int i=1;i<=100;i++){
        calcSafeZone(i,0,0,0);
    }

    cout << area;

    return 0;
}