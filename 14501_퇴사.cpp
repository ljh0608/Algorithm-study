#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
int N;
vector<pair<int, int>> vp; // 상담 일정을 저장할 벡터
int res[16] = { 0 }; // 각 날짜에 대한 최대 수익을 저장할 배열

void dp() {
    int max_pay = 0;

    for (int i = 0; i <= N; i++) {
        res[i] = max(max_pay, res[i]);
        int next = vp[i].first+i;
        if ( next <= N) {
            res[next] = max(res[next], res[i] + vp[i].second);
        }
            max_pay = max(max_pay, res[i]);
    }

    cout << max_pay;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> N;

    vp.resize(N + 1); // 1부터 N까지 사용

    for (int i = 0; i < N; i++) {
        cin >> vp[i].first >> vp[i].second; // 상담 일정을 입력받음 (소요일수, 수익)
    }

    dp();
  
    
    

    return 0;
}