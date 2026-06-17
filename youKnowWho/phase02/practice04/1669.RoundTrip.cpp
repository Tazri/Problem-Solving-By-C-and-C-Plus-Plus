// link : https://cses.fi/problemset/task/1669/
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
vector<bool> visited;
vector<int> parent;
vector<vector<int>> graph;
bool isCycle = false;
vector<int> cycle; // store one for the cycle

void dfs(int i, int p = 0)
{
    if (isCycle)
        return;
    visited[i] = true;
    parent[i] = p;

    for (int to : graph[i])
    {
        if (!visited[to])
        {
            dfs(to, i);
            if (isCycle)
                return;
        }
        else if (p != to)
        {
            isCycle = true;

            int curr = i; // to to i, go back
            while (curr != to)
            {
                cycle.push_back(curr);
                curr = parent[curr];
            }
            cycle.push_back(curr);
            reverse(cycle.begin(), cycle.end());
            // start with 'to' and end with 'to'
            cycle.push_back(to);
            return;
        }
    }
}

void _DIBBA(int _DIBBA_NO)
{
    cin >> n >> m;
    graph = vector<vector<int>>(n + 1);
    visited = vector<bool>(n + 1, false);
    parent = vector<int>(n + 1, -1);

    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    for (int i = 1; i <= n; i++)
    {
        if (visited[i])
            continue;
        dfs(i, 0);

        if (isCycle)
        {
            cout << cycle.size() << endl;
            for (int j = 0; j < cycle.size(); j++)
                cout << cycle[j] << " \n"[j == cycle.size() - 1];
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