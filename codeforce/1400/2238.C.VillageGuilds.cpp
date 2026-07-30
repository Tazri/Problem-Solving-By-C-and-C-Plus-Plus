// link : https://codeforces.com/problemset/problem/2238/C
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

void _DIBBA(int _DIBBA_NO)
{
    int n;
    cin >> n;

    vector<vector<int>> graph(n + 1);

    for (int i = 2; i <= n; i++)
    {
        int par;
        cin >> par;
        graph[par].push_back(i);
        graph[i].push_back(par);
    }

    vector<bool> visited(n + 1, false);
    vector<int> dist(n + 1, 0);
    vector<int> parent(n + 1, 0);
    visited[1] = true;
    dist[1] = 1;
    queue<int> q;
    q.push(1);
    int mx = 1;
    while (q.size() > 0)
    {
        int from = q.front();
        q.pop();

        for (int to : graph[from])
        {
            if (visited[to])
                continue;
            parent[to] = from;
            visited[to] = true;
            dist[to] = dist[from] + 1;
            mx = max(mx, dist[to]);
            q.push(to);
        }
    }

    vector<vector<int>> levels(mx + 1);
    for (int i = 1; i <= n; i++)
    {
        levels[dist[i]].push_back(i);
    }

    vector<int> heights(n + 1, 0);
    for (int lvl = mx; lvl > 1; lvl--)
    {

        for (int nd : levels[lvl])
        {
            heights[parent[nd]] = max(heights[nd] + 1, heights[parent[nd]]);
        }
    }

    visited = vector<bool>(n + 1, false);
    int ans = 0;
    for (int nd = 1; nd <= n; nd++)
    {
        visited[nd] = true;
        vector<int> h;
        for (int chld : graph[nd])
        {
            if (visited[chld])
                continue;
            h.push_back(heights[chld] + 1);
        }

        if (h.size() <= 1)
            continue;
        sort(h.rbegin(), h.rend());

        ans += h[1];
    }

    cout << ans + n << endl;
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