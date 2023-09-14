#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;
int n, m;
int dp[1000001];

void make_one()
{

    dp[1] = 0;
    dp[2] = 1;
    dp[3] = 1;
    for (int i = 4; i <= n; i++)
    {
        dp[i] = dp[i - 1] + 1;
        if (i % 2 == 0)
        {
            dp[i] = min(dp[i], dp[i / 2] + 1);
        }

        if (i % 3 == 0)
        {   
            dp[i] = min(dp[i / 3] + 1, dp[i]);
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;
    fill(dp, dp + 100000, 1e9);
    make_one();

    cout << dp[n];
    
    return 0;
}