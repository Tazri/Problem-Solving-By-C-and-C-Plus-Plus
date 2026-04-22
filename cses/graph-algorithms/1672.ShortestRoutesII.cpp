// linK : https://cses.fi/problemset/task/1672/
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

ll inf = INT64_MAX;

int n, m, q;

vector<vector<ll>> allDist;
vector<vector<ll>> graph;

void calculate(int source)
{
    vector<ll> dist(n + 1, inf);
    dist[source] = 0;

    priority_queue<pair<ll, int>, vector<pair<ll, int>>, greater<pair<ll, int>>> pq;
    pq.push({dist[source], source});

    while (pq.size() > 0)
    {
        pair<ll, int> pairFrom = pq.top();
        pq.pop();

        int fromCost = pairFrom.first;
        int from = pairFrom.second;

        if (dist[from] < fromCost)
            continue;

        for (int to = 1; to <= n; to++)
        {
            if (graph[from][to] == -1 || to == from)
                continue;

            ll cost = graph[from][to];

            if (dist[from] + cost < dist[to])
            {
                dist[to] = dist[from] + cost;
                pq.push({dist[to], to});
            }
        }
    }

    for (int i = 1; i <= n; i++)
    {
        graph[source][i] = dist[i] == inf ? -1 : dist[i];
    }

    for (int i = 1; i <= n; i++)
    {
        graph[i][source] = graph[source][i];
    }
}

void _DIBBA(int _DIBBA_NO)
{
    cin >> n >> m >> q;

    allDist = vector<vector<ll>>(n + 1, vector<ll>(n + 1, inf));
    graph = vector<vector<ll>>(n + 1, vector<ll>(n + 1, -1));

    for (int i = 0; i < m; i++)
    {
        int from, to;
        ll cost;
        cin >> from >> to >> cost;

        if (graph[from][to] == -1)
            graph[from][to] = cost;

        ll mn = min(graph[from][to], cost);
        graph[from][to] = mn;
        graph[to][from] = mn;
    }

    for (int i = 1; i <= n; i++)
        calculate(i);

    while (q--)
    {
        int from, to;
        cin >> from >> to;

        cout << graph[from][to] << endl;
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