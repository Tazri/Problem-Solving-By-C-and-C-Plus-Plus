// linK : https://atcoder.jp/contests/dp/tasks/dp_p
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

int n;
int mod = (1e9) + 7;
vector<vector<int>> graph;
vector<vector<int>> dp;
int solve(int par = 0, int from = 1)
{
    dp[from][0] = 1;
    dp[from][1] = 1;
    for (int to : graph[from])
    {
        if (to == par)
            continue;
        solve(from, to);
        dp[from][0] *= (dp[to][0] + dp[to][1]) % mod;
        dp[from][0] %= mod;
        dp[from][1] *= (dp[to][0]) % mod;
        dp[from][1] %= mod;
    }

    return (dp[from][0] + dp[from][1]) % mod;
}

void _DIBBA(int _DIBBA_NO)
{
    int n;
    cin >> n;
    graph = vector<vector<int>>(n + 1);
    dp = vector<vector<int>>(n + 1, vector<int>(2, 1));

    for (int i = 0; i < n - 1; i++)
    {
        int from, to;
        cin >> from >> to;
        graph[from].push_back(to);
        graph[to].push_back(from);
    }

    cout << solve() << endl;
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