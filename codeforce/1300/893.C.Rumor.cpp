// link : https://codeforces.com/contest/893/problem/C
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

#define fraction()                \
    cout.unsetf(ios::floatfield); \
    cout.precision(10);           \
    cout.setf(ios::fixed, ios::floatfield)

#define int ll

void _DIBBA()
{
    int n, m;
    cin >> n >> m;
    vector<int> cost(n + 1);
    vector<vector<int>> graph(n + 1);

    int ans = 0;

    for (int i = 1; i <= n; i++)
        cin >> cost[i];

    for (int i = 0; i < m; i++)
    {
        int from, to;
        cin >> from >> to;

        graph[from].push_back(to);
        graph[to].push_back(from);
    }

    vector<bool> visited(n + 1, false);

    for (int i = 1; i <= n; i++)
    {
        if (visited[i])
            continue;

        int mn = cost[i];

        queue<int> q;
        visited[i] = true;
        q.push(i);

        // cout << mn << endl;
        while (q.size() > 0)
        {
            int from = q.front();
            q.pop();
            mn = min(mn, cost[from]);

            for (int to : graph[from])
            {
                if (visited[to])
                    continue;

                mn = min(cost[to], mn);
                visited[to] = true;
                q.push(to);
            }
        }

        // cout << "i : " << i << " mn " << mn << endl;
        ans += mn;
    }

    cout << ans << endl;
}

int32_t main()
{
    _GORIBER_TURBO_MODE_ON();

    int t = 1;
    // cin >> t;
    while (t--)
        _DIBBA();
    return 0;
}