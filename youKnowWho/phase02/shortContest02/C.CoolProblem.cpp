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
    vector<int> v(n + 1);
    for (int i = 1; i <= n; i++)
    {
        int from = i;
        int to;
        cin >> to;
        v[i] = to;

        if (to == -1)
            continue;

        graph[from].push_back(to);
        graph[to].push_back(from);
    }

    vector<bool> visited(n + 1, false);
    vector<int> dist(n + 1, 0);
    int ans = 1;
    for (int i = 1; i <= n; i++)
    {
        if (visited[i])
            continue;

        if (v[i] != -1)
            continue;

        queue<int> q;
        visited[i] = true;
        q.push(i);
        dist[i] = 1;
        int mx = 1;
        while (q.size() > 0)
        {
            int from = q.front();
            q.pop();

            for (int to : graph[from])
            {
                if (visited[to])
                    continue;
                visited[to] = true;
                dist[to] = dist[from] + 1;
                mx = max(mx, dist[to]);
                q.push(to);
            }
        }
        ans = max(mx, ans);
    }

    cout << ans << endl;
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