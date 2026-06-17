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
    int k, n, m;
    cin >> k >> n >> m;

    vector<int> v(k);

    for (int i = 0; i < k; i++)
        cin >> v[i];

    vector<vector<int>> graph(n + 1);

    for (int i = 0; i < m; i++)
    {
        int from, to;
        cin >> from >> to;

        graph[from].push_back(to);
    }

    vector<int> mp(n + 1, 0);

    for (int nd : v)
    {
        vector<bool> visited(n + 1, false);
        mp[nd]++;

        visited[nd] = true;
        queue<int> q;
        q.push(nd);

        while (q.size() > 0)
        {
            int from = q.front();
            q.pop();

            for (int to : graph[from])
            {
                if (visited[to])
                    continue;
                mp[to]++;
                visited[to] = true;
                q.push(to);
            }
        }
    }

    int ans = 0;
    for (int i = 1; i <= n; i++)
        if (mp[i] == k)
            ans++;

    cout << "Case " << _DIBBA_NO << ": " << ans << endl;
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