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

void _DIBBA(int _DIBBA_NO)
{
    cout << "Case " << _DIBBA_NO << ": ";
    int n;
    cin >> n;
    map<pair<int, int>, int> cost;
    vector<vector<int>> graph(n);
    for (int i = 0; i < n - 1; i++)
    {
        int to, from, c;
        cin >> from >> to >> c;
        cost[{from, to}] = c;
        cost[{to, from}] = c;
        graph[from].push_back(to);
        graph[to].push_back(from);
    }

    vector<int> dist(n, 0);
    vector<bool> visited(n, false);
    visited[0] = true;
    queue<int> q;
    q.push(0);

    while (q.size() > 0)
    {
        int from = q.front();
        q.pop();
        for (int to : graph[from])
        {
            if (visited[to])
                continue;

            visited[to] = true;
            dist[to] = dist[to] + cost[{from, to}] + dist[from];
            q.push(to);
        }
    }

    int rt = 0;
    for (int i = 1; i < n; i++)
        if (dist[rt] < dist[i])
            rt = i;

    dist = vector<int>(n, 0);
    visited = vector<bool>(n, false);

    visited[rt] = true;
    q.push(rt);
    while (q.size() > 0)
    {
        int from = q.front();
        q.pop();

        for (int to : graph[from])
        {
            if (visited[to])
                continue;
            visited[to] = true;
            dist[to] += cost[{from, to}] + dist[from];
            q.push(to);
        }
    }

    cout << *max_element(dist.begin(), dist.end()) << endl;
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