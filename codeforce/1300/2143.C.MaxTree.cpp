// link : https://codeforces.com/contest/2143/problem/C
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
    vector<pair<int, int>> v(n + 1);

    vector<vector<int>> g(n + 1);

    for (int i = 0; i < n - 1; i++)
    {
        int from, to, f, t;
        cin >> from >> to >> f >> t;
        g[from].push_back(to);
        g[to].push_back(from);

        if (f > t)
        {
            v[from].second++;
            v[to].first++;
        }
        else
        {
            v[to].second++;
            v[from].first++;
        }
    }

    vector<int> ans(n + 1);
    vector<bool> visited(n + 1, false);
    int li = 1;
    int ri = n;

    queue<int> q;

    for (int i = 1; i <= n; i++)
    {
        int mn = min(v[i].first, v[i].second);
        int mx = max(v[i].first, v[i].second);

        if (mn == 0 && mx == 1)
        {
            visited[i] = true;
            q.push(i);
        }
    }

    while (q.size() > 0)
    {
        int from = q.front();
        q.pop();

        if (v[from].second == 1)
        {
            ans[from] = ri--;
        }
        else
        {
            ans[from] = li++;
        }

        for (int to : g[from])
        {
            if (visited[to])
                continue;

            if (v[from].second == 1)
                v[to].first--;
            else
                v[to].second--;

            int mn = min(v[to].first, v[to].second);
            int mx = max(v[to].first, v[to].second);

            if (mn == 0 && mx == 1)
            {
                visited[to] = true;
                q.push(to);
            }
        }
    }

    for (int i = 1; i <= n; i++)
    {
        cout << ans[i] << " \n"[i == n];
    }
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