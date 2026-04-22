// linK : https://cses.fi/problemset/task/1671/
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

#define int ll
int inf = INT64_MAX;

void _DIBBA(int _DIBBA_NO)
{
    int n, m;
    cin >> n >> m;
    vector<vector<pair<int, int>>> graph(n + 1);

    for (int i = 0; i < m; i++)
    {
        int from, to, len;
        cin >> from >> to >> len;
        graph[from].push_back({len, to});
    }

    vector<int> dist(n + 1);
    for (int i = 2; i <= n; i++)
        dist[i] = inf;
    dist[1] = 0;

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

    vector<bool> done(n + 1, false);
    pq.push({dist[0], 1});

    while (pq.size() > 0)
    {
        pair<int, int> p = pq.top();
        pq.pop();

        int from = p.second;
        int fromLen = p.first;

        if (dist[from] < fromLen)
            continue;

        for (pair<int, int> p : graph[from])
        {
            int to = p.second;
            int len = p.first;

            if (done[to])
                continue;

            if (dist[from] + len < dist[to])
            {
                dist[to] = dist[from] + len;
                pq.push({dist[to], to});
            }
        }

        done[from] = true;
    }

    for (int i = 1; i <= n; i++)
        cout << dist[i] << " \n"[i == n];
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