#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

vector<vector<int>> dp;

string s;

int solve(int i,int j){
    if(i >= j)return 0;

    if(dp[i][j] != -1){
        return dp[i][j];
    }

    // take i and j
    int slv1 = (s[i] == s[j] ? 0 : 1) +solve(i+1,j-1);

    // dlt i
    int slv2 = 1+solve(i+1,j);

    // dlt j
    int slv3 = 1+solve(i,j-1);

    dp[i][j] = min({slv1,slv2,slv3});
    return min({slv1,slv2,slv3});
}

void _DIBBA(int _DIBBA_NO)
{
    cin >> s;
    int n  = s.size();
    
    dp = vector<vector<int>>(n,vector<int>(n,-1));

    cout << solve(0,s.size()-1) << endl;
}

int32_t main()
{
    _GORIBER_TURBO_MODE_ON();

    int t = 1;
    cin >> t;
    for(int i = 1;i <= t;i++)
        _DIBBA(i);
    return 0;
}