// link : https://atcoder.jp/contests/dp/tasks/dp_g
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

int n, m;

vector<vector<int>> graph;
vector<int> dp;

int solve(int from)
{
    if (dp[from] != -1)
        return dp[from];

    int mx = 1;
    for (int to : graph[from])
    {
        int a1 = solve(to) + 1;
        mx = max(a1, mx);
    }

    dp[from] = mx;
    return mx;
}

void _DIBBA(int _DIBBA_NO)
{
    cin >> n >> m;

    graph = vector<vector<int>>(n + 1);
    dp = vector<int>(n + 1, -1);
    for (int i = 0; i < m; i++)
    {
        int from, to;
        cin >> from >> to;
        graph[from].push_back(to);
    }

    int mx;
    for (int i = 1; i <= n; i++)
    {
        int take = solve(i);

        if (i == 1)
            mx = take;
        mx = max(mx, take);
    }

    cout << (mx - 1) << endl;
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