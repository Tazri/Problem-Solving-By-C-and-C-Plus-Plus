// link : https://codeforces.com/problemset/problem/1272/E
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

bool inRange(int n, int x)
{
    return x >= 0 && x < n;
}

void _DIBBA(int _DIBBA_NO)
{
    int n;
    cin >> n;
    vector<int> v(n);
    vector<vector<int>> evenGraph(n);
    vector<vector<int>> oddGraph(n);

    for (int i = 0; i < n; i++)
        cin >> v[i];

    for (int i = 0; i < n; i++)
    {
        int to = i;
        int frm1 = i - v[i];
        int frm2 = i + v[i];

        if (v[i] & 1)
        {
            if (inRange(n, frm1))
                oddGraph[frm1].push_back(to);

            if (inRange(n, frm2))
                oddGraph[frm2].push_back(to);

            continue;
        }

        if (inRange(n, frm1))
            evenGraph[frm1].push_back(to);

        if (inRange(n, frm2))
            evenGraph[frm2].push_back(to);
    }

    vector<int> ans(n, -1);
    vector<int> dist(n, -1);
    vector<bool> visited(n, false);
    queue<int> q;

    for (int i = 0; i < n; i++)
    {
        if (v[i] & 1)
        {
            dist[i] = 0;
            visited[i] = true;
            q.push(i);
        }
    }

    while (q.size() > 0)
    {
        int from = q.front();
        q.pop();

        for (int to : evenGraph[from])
        {
            if (visited[to])
                continue;

            dist[to] = dist[from] + 1;
            visited[to] = true;
            q.push(to);
        }
    }

    for (int i = 0; i < n; i++)
        if (v[i] % 2 == 0)
            ans[i] = dist[i];

    dist = vector<int>(n, -1);
    visited = vector<bool>(n, false);

    for (int i = 0; i < n; i++)
    {
        if (v[i] % 2 == 0)
        {
            dist[i] = 0;
            visited[i] = true;
            q.push(i);
        }
    }

    while (q.size() > 0)
    {
        int from = q.front();
        q.pop();

        for (int to : oddGraph[from])
        {
            if (visited[to])
                continue;

            visited[to] = true;
            dist[to] = dist[from] + 1;
            q.push(to);
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (v[i] & 1)
            ans[i] = dist[i];
    }

    for (int i = 0; i < n; i++)
        cout << ans[i] << " \n"[i == n - 1];
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