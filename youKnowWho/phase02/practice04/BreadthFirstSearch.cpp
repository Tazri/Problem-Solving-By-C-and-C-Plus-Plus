// link : https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_11_C
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

    for (int i = 1; i <= n; i++)
    {
        int u, k;
        cin >> u >> k;

        for (int j = 0; j < k; j++)
        {
            int v;
            cin >> v;
            graph[u].push_back(v);
        }
    }

    vector<int> dist(n + 1, -1);
    dist[1] = 0;
    vector<int> visited(n + 1, false);
    visited[1] = true;
    queue<int> q;
    q.push(1);

    while (q.size() > 0)
    {
        int from = q.front();
        q.pop();

        for (int to : graph[from])
        {
            if (visited[to])
                continue;
            dist[to] = dist[from] + 1;
            q.push(to);
            visited[to] = true;
        }
    }

    for (int i = 1; i <= n; i++)
    {
        cout << i << " " << dist[i] << endl;
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