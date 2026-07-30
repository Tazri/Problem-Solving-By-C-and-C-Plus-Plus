#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

int inf = INT32_MAX;

void _DIBBA(int _DIBBA_NO)
{
    int n = 501;
    int m;
    cin >> m;

    vector<vector<pair<int, int>>> graph(n + 1);

    for (int i = 0; i < m; i++)
    {
        int from, to, cost;
        cin >> from >> to >> cost;
        graph[from].push_back({cost, to});
        graph[to].push_back({cost, from});
    }

    vector<int> dist(n + 1, inf);

    int u;
    cin >> u;
    dist[u] = 0;
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

    pq.push({dist[u], u});

    while (pq.size() > 0)
    {
        pair<int, int> pfrom = pq.top();
        pq.pop();
        int fromCost = pfrom.first;
        int from = pfrom.second;

        if (dist[from] < fromCost)
            continue;

        for (pair<int, int> pto : graph[from])
        {
            int cost = pto.first;
            int to = pto.second;

            if (dist[from] + cost < dist[to])
            {
                dist[to] = dist[from] + cost;
                pq.push({dist[to], to});
            }
        }
    }

    int q;
    cin >> q;

    while (q--)
    {
        int to;
        cin >> to;

        if (dist[to] == inf)
            cout << "NO PATH" << endl;
        else
            cout << dist[to] << endl;
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