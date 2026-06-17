// link : https://codeforces.com/problemset/problem/580/C
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
vector<bool> cats;
vector<bool> visited;
vector<bool> isLeaf;

int dfs(int i, int c = 0)
{
    if (visited[i])
        return 0;

    if (cats[i])
        c += 1;
    else
        c = 0;

    if (c > m)
        return 0;

    visited[i] = true;
    if (graph[i].size() == 1 && i != 1)
    {
        return 1;
    }

    int ans = 0;
    for (int to : graph[i])
    {
        ans += dfs(to, c);
    }

    return ans;
}

void _DIBBA(int _DIBBA_NO)
{
    cin >> n >> m;
    graph = vector<vector<int>>(n + 1);
    cats = vector<bool>(n + 1);
    visited = vector<bool>(n + 1, false);
    isLeaf = vector<bool>(n + 1, false);
    for (int i = 1; i <= n; i++)
    {
        int have;
        cin >> have;
        if (have)
            cats[i] = true;
        else
            cats[i] = false;
    }

    for (int i = 0; i < n - 1; i++)
    {
        int from, to;
        cin >> from >> to;
        graph[from].push_back(to);
        graph[to].push_back(from);
    }

    int ans = dfs(1, 0);

    cout << ans << endl;
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