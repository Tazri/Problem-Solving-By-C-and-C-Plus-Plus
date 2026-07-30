#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'
#define int ll
#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
int mod = ((ll)1e9) + 7;
int n;
vector<vector<int>> graph;
vector<vector<int>> dp;
vector<bool> visited;
int solve(int par, int i)
{

    dp[0][i] = 1;
    dp[1][i] = 1;

    for (int to : graph[i])
    {
        if (par == to)
            continue;
        solve(i, to);
        dp[0][i] *= ((dp[0][to] + dp[1][to]) % mod);
        dp[0][i] %= mod;
        dp[1][i] *= dp[0][to];
        dp[1][i] %= mod;
    }

    return (dp[0][i] + dp[1][i]) % mod;
}

void _DIBBA(int _DIBBA_NO)
{
    cin >> n;
    graph = vector<vector<int>>(n + 1);
    dp = vector<vector<int>>(2, vector<int>(n + 1, -1));
    visited = vector<bool>(n + 1, false);
    for (int i = 0; i < n - 1; i++)
    {
        int from, to;
        cin >> from >> to;
        graph[from].push_back(to);
        graph[to].push_back(from);
    }

    cout << solve(0, 1) << endl;
}

int32_t main()
{
    _GORIBER_TURBO_MODE_ON();

    int t = 1;
    // cin >> t;
    for (int i = 1; i <= t; i++)
        _DIBBA(i);
    return 0;
}