// link : https://codeforces.com/problemset/problem/1771/D
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
int n;
string s;
vector<vector<int>> graph;
vector<vector<int>> nxt;
vector<vector<int>> dp;
vector<int> slt;
void dfs(int par, int from)
{
    slt.push_back(from);
    for (int to : graph[from])
    {
        if (to == par)
            continue;

        dfs(from, to);
    }
}

int solve(int u, int v)
{
    if (u == v)
    {
        if (s[u] == s[v])
            return 1;

        return 0;
    }

    if (dp[u][v] != -1)
        return dp[u][v];

    int ans = 0;
    if (s[u] == s[v])
    {
        ans = 2 + (nxt[u][v] == v ? 0 : solve(nxt[u][v], nxt[v][u]));
    }

    ans = max({ans, solve(u, nxt[v][u]), solve(nxt[u][v], v)});

    dp[u][v] = ans;
    return ans;
}

void _DIBBA(int _DIBBA_NO)
{
    cin >> n;
    cin >> s;
    s = " " + s;

    graph = vector<vector<int>>(n + 1);
    nxt = vector<vector<int>>(n + 1, vector<int>(n + 1));
    dp = vector<vector<int>>(n + 1, vector<int>(n + 1, -1));
    for (int i = 0; i < n - 1; i++)
    {
        int from, to;
        cin >> from >> to;
        graph[from].push_back(to);
        graph[to].push_back(from);
    }

    for (int par = 1; par <= n; par++)
    {
        for (int x : graph[par])
        {
            dfs(par, x);
            for (int si : slt)
                nxt[par][si] = x;
            slt.clear();
        }
    }

    int mx = 0;
    for (int u = 1; u <= n; u++)
    {
        for (int v = 1; v <= n; v++)
        {
            mx = max(mx, solve(u, v));
        }
    }

    cout << mx << endl;
}

int32_t main()
{
    _GORIBER_TURBO_MODE_ON();

    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++)
        _DIBBA(i);
    return 0;
}