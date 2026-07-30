// link : https://www.spoj.com/problems/EAGLE1/en/
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

vector<int> distFromRt(vector<vector<int>> &graph, map<pair<int, int>, int> &mp, int rt)
{
    int n = graph.size() - 1;
    vector<bool> visited(n + 1, false);
    vector<int> dist(n + 1, 0);

    queue<int> q;
    q.push(rt);
    visited[rt] = true;
    dist[rt] = 0;

    while (q.size() > 0)
    {
        int from = q.front();
        q.pop();

        for (int to : graph[from])
        {
            if (visited[to])
                continue;
            visited[to] = true;
            dist[to] = dist[from] + mp[{min(from, to), max(from, to)}];
            q.push(to);
        }
    }

    return dist;
}

void _DIBBA(int _DIBBA_NO)
{
    int n;
    cin >> n;
    vector<vector<int>> graph(n + 1);
    map<pair<int, int>, int> mp;

    for (int i = 0; i < n - 1; i++)
    {
        int from, to, c;
        cin >> from >> to >> c;
        graph[from].push_back(to);
        graph[to].push_back(from);

        mp[{min(from, to), max(from, to)}] = c;
    }

    vector<int> dist = distFromRt(graph, mp, 1);

    int rt1 = 1;
    for (int i = 1; i <= n; i++)
        if (dist[rt1] < dist[i])
            rt1 = i;

    vector<int> d1 = distFromRt(graph, mp, rt1);
    int rt2 = 1;
    for (int i = 1; i <= n; i++)
        if (d1[rt2] < d1[i])
            rt2 = i;

    vector<int> d2 = distFromRt(graph, mp, rt2);

    vector<int> ans(n + 1);

    for (int i = 1; i <= n; i++)
        ans[i] = max(d1[i], d2[i]);

    for (int i = 1; i <= n; i++)
        cout << ans[i] << " \n"[i == n];
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