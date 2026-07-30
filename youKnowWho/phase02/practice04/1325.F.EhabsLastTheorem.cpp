// link : https://codeforces.com/problemset/problem/1325/F
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
vector<bool> visited;
vector<int> parent;
vector<int> depth;
vector<int> cycle;
bool cycleFound = false;
int rt = 1;
vector<int> color;

void runDfsForCycle(int from, int par)
{
    if (cycleFound)
        return;

    visited[from] = true;

    for (int to : graph[from])
    {
        if (!visited[to])
        {
            visited[to] = true;
            depth[to] = depth[from] + 1;
            parent[to] = from;
            runDfsForCycle(to, from);

            if (cycleFound)
                return;
            continue;
        }

        int size = depth[from] - depth[to] + 1;

        if (size >= rt)
        {
            cycleFound = true;
            int curr = from;

            while (curr != to)
            {
                cycle.push_back(curr);
                curr = parent[curr];
            }

            cycle.push_back(to);
            return;
        }
    }
}

void doColor(int from)
{
    set<int> clr;

    for (int to : graph[from])
        if (color[to])
            clr.insert(color[to]);

    int cl = 1;

    while (clr.count(cl))
        cl++;

    color[from] = cl;

    for (int to : graph[from])
    {
        if (color[to])
            continue;
        doColor(to);
    }
}

void _DIBBA(int _DIBBA_NO)
{
    cin >> n >> m;
    graph = vector<vector<int>>(n + 1);
    visited = vector<bool>(n + 1, false);
    parent = vector<int>(n + 1, 0);
    depth = vector<int>(n + 1, 0);
    color = vector<int>(n + 1, 0);

    for (int i = 0; i < m; i++)
    {
        int from, to;
        cin >> from >> to;

        graph[from].push_back(to);
        graph[to].push_back(from);
    }
    while (rt * rt < n)
        rt++;

    runDfsForCycle(1, 0);

    if (cycleFound)
    {
        cout << 2 << endl;
        cout << cycle.size() << endl;
        for (int i = 0; i < cycle.size(); i++)
        {
            cout << cycle[i] << " \n"[i == cycle.size() - 1];
        }
        return;
    }

    cout << 1 << endl;
    doColor(1);
    int mxColor = 0;
    for (int i = 1; i <= n; i++)
        mxColor = max(mxColor, color[i]);

    vector<vector<int>> cnt(mxColor + 1);

    for (int i = 1; i <= n; i++)
        cnt[color[i]].push_back(i);

    for (int i = 1; i <= mxColor; i++)
    {
        if (cnt[i].size() < rt)
            continue;

        for (int j = 0; j < rt; j++)
            cout << cnt[i][j] << " \n"[j == rt - 1];
        return;
    }
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