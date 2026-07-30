// link : https://codeforces.com/problemset/problem/20/C
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

int inf = INT32_MAX;

void _DIBBA(int _DIBBA_NO)
{
    int n, m;
    cin >> n >> m;

    vector<vector<pair<int, int>>> graph(n + 1);

    for (int i = 1; i <= m; i++)
    {
        int from, to, len;
        cin >> from >> to >> len;

        graph[from].push_back({len, to});
        graph[to].push_back({len, from});
    }

    vector<int> dist(n + 1);
    vector<int> comeFrom(n + 1, -1);
    dist[1] = 0;
    for (int i = 2; i <= n; i++)
        dist[i] = inf;

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

    vector<bool> done(n + 1, false);
    done[1] = true;
    pq.push({dist[1], 1});

    while (pq.size() > 0)
    {
        pair<int, int> p = pq.top();
        pq.pop();
        int fromDist = p.first;
        int from = p.second;

        if (dist[from] < fromDist)
            continue;

        for (pair<int, int> pr : graph[from])
        {

            int to = pr.second;
            int len = pr.first;

            if (done[to])
                continue;

            if (dist[from] + len < dist[to])
            {
                comeFrom[to] = from;
                dist[to] = dist[from] + len;
                pq.push({dist[to], to});
            }
        }

        done[from] = true;
    }

    if (comeFrom[n] == -1)
    {
        cout << -1 << endl;
        return;
    }

    vector<int> path;
    path.reserve(n);

    int curr = n;
    while (curr != -1)
    {
        path.push_back(curr);
        curr = comeFrom[curr];
    }

    reverse(path.begin(), path.end());

    for (int i = 0; i < path.size(); i++)
        cout << path[i] << " \n"[path.size() - 1 == i];
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