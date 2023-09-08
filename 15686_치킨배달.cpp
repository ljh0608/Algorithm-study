#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;
int n,m;
int street[51][51];
int chicken[14][2];
int copyChicken[14][2];
int house[101][2];
int visited[14];

vector<pair<int,int> >v;

   int num=1;
   int hs=1;
    int dist=1e9;
  int temp_dist=0;
    int temp=1e9;

void calcDist(int x, int y){
    temp=1e9;

        for(int i=0;i<m;i++){
             temp= min( abs(v[i].first -x)+abs(v[i].second-y),temp);
        }    

    return ;
}


void check_in_house(int start,int cnt){

    if(cnt==m+1){
    


    //집에서부터 거리를 측정해서 다 더하는 과정
    temp_dist=0;
        for(int i=1; i<hs;i++){
          calcDist(house[i][0],house[i][1]);
          temp_dist+=temp;
        }

        // cout <<temp_dist<<"\n";
        if(temp_dist<dist){
            dist=temp_dist;
        }
  

        //다시 돌려놔야함


        return ;

    }

    for(int i=start;i<num;i++){
        if(!visited[i]){
            visited[i]=1;
            v.push_back(make_pair(chicken[i][0],chicken[i][1]));
            check_in_house(i+1,cnt+1);
              visited[i]=0;
              v.pop_back();
        }
      
    }
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >>n>>m;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>> street[i][j];

            if(street[i][j]==2){
                chicken[num][0]=i;
                chicken[num][1]=j;
                num++;
            }
            if(street[i][j]==1){
                house[hs][0]=i; //1의 위치를 저장
                house[hs][1]=j;
                hs++;
            }
        }
    }

   check_in_house(1,1);
//    cout<< dist;

    //num m 으로 nCr 해서 뽑고 
    //그거 빼고 copyStr 다 지우고 
    // dfs로 거리계산하고 
    //최소값 찾고
    //permutation 돌려서 
    cout <<dist;
    return 0;
}