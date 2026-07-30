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
    int n, m;
    cin >> n >> m;
    vector<int> cost(n + 1);

    for (int i = 1; i <= n; i++)
        cin >> cost[i];

    vector<vector<int>> graph(n + 1);

    for (int i = 0; i < m; i++)
    {
        int from, to;
        cin >> from >> to;

        graph[from].push_back(to);
        graph[to].push_back(from);
    }

    vector<bool> visited(n + 1, false);
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        if (visited[i])
            continue;

        visited[i] = true;
        queue<int> q;
        q.push(i);

        int mn = cost[i];

        while (q.size() > 0)
        {
            int from = q.front();
            q.pop();

            for (int to : graph[from])
            {
                if (visited[to])
                    continue;

                visited[to] = true;
                mn = min(cost[to], mn);
                q.push(to);
            }
        }

        ans += mn;
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