// link : https://cses.fi/problemset/task/1678/
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
vector<int> mark;
vector<vector<int>> graph;
vector<int> comeFrom;
bool isCycle = false;
vector<int> cycle;
vector<int> topSort;

void dfs(int i, int prev)
{
    if (isCycle)
        return;

    if (mark[i] == 2)
        return;

    if (mark[i] == 1)
    {
        isCycle = true;
        int curr = prev; // go backward curr to - prev
        while (curr != i)
        {
            cycle.push_back(curr);
            curr = comeFrom[curr];
        }

        cycle.push_back(curr);
        reverse(cycle.begin(), cycle.end());
        cycle.push_back(curr);
        return;
    }

    comeFrom[i] = prev;
    mark[i] = 1;
    for (int to : graph[i])
    {
        dfs(to, i);
        if (isCycle)
            return;
    }
    topSort.push_back(i);
    mark[i] = 2;
}
// reverse topsort vector give topological sorted array if cycle not found

void _DIBBA(int _DIBBA_NO)
{
    cin >> n >> m;
    graph = vector<vector<int>>(n + 1);
    mark = vector<int>(n + 1, 0);
    comeFrom = vector<int>(n + 1, -1);

    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
    }

    for (int i = 1; i <= n; i++)
    {
        if (mark[i] == 2)
            continue;
        dfs(i, 0);

        if (isCycle)
        {
            cout << cycle.size() << endl;
            for (int j = 0; j < cycle.size(); j++)
                cout << cycle[j] << " \n"[j == n - 1];
            return;
        }
    }

    cout << "IMPOSSIBLE" << endl;
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