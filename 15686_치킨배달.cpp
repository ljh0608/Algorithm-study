#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;
int n,m;
int street[51][51];
int chicken[14][2];
int house[101][2];
int visited[14];

    //접근 
    //num m 으로 nCr numCn 해서 뽑고 (최대 개수 뽑는게 무조건 유리하니 ) 
    //dfs로 선택된 치킨집 최소 거리계산하고 
    //선택된 치킨집 중 최소거리를 가지고 있는 치킨집의 거리를 계산 
 

    //오답노트
    //직접 거리 계산해야되는줄알고 조합후 또 dfs를 돌리면서 시간초과
    // 치킨집 뽑아야하는 개수보다 하나 더 뽑아서 오답
    // dfs에 고정값 start를 넣어서 오답
    // num 포함시켜 한개 더 뽑아서 오답
vector<pair<int,int> >v;

   int num=1;
   int hs=1;
    int dist=1e9;
  int temp_dist=0;
    int temp=1e9;

void calcDist(int x, int y){
    temp=1e9;

        for(int i=0;i<m;i++){
             temp= min( abs(v[i].first -x)+abs(v[i].second-y),temp); // 치킨집 거리 계산 공식으로 더 작은 거리 저장 
             //v는 조합에서 선정한 치킨집 리스트
        }    

    return ;
}


void check_in_house(int start,int cnt){ //치킨집 조합으로 뽑아서 집들과 거리 계산하는 함수

    if(cnt==m+1){
    //집에서부터 거리를 측정해서 다 더하는 과정
    temp_dist=0;
        for(int i=1; i<hs;i++){
          calcDist(house[i][0],house[i][1]); //집에서 치킨집들중 가장짧은 거리를 저장 (모든 집에서 어느 한 치킨집은 연결해야하므로 집을 for문 돌림)
          temp_dist+=temp; // 각 집마다의 최소 거리 더해서 저장
        }

        if(temp_dist<dist){
            dist=temp_dist; // 치킨집 선택 경우에서 최소거리 저장
        }


        return ;

    }

    for(int i=start;i<num;i++){
        if(!visited[i]){
            visited[i]=1; //방문했다는 체크 후 
            v.push_back(make_pair(chicken[i][0],chicken[i][1])); //치킨집 리스트에 푸쉬
            check_in_house(i+1,cnt+1); // dfs 돌리는데 start로 하거나 +1안해주면 시간초과
              visited[i]=0; //방문 취소
              v.pop_back(); // 동시에 치킨집도 빼기
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
                chicken[num][0]=i; //치킨집 위치 저장 (2의 위치 정보 저장)
                chicken[num][1]=j;
                num++;  //이 로직 때문에 위에 num을 미만으로 잡아야함 <
            }
            if(street[i][j]==1){ //가정집 위치를 저장해서 사용  (1의 위치 저장)
                house[hs][0]=i; 
                house[hs][1]=j;
                hs++;
            }
        }
    }

   check_in_house(1,1);

    cout <<dist;
    return 0;
}