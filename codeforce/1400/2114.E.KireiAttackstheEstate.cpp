// link : https://codeforces.com/problemset/problem/2114/E
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

#define fraction()                \
    cout.unsetf(ios::floatfield); \
    cout.precision(10);           \
    cout.setf(ios::fixed, ios::floatfield)

struct Nd
{
    int oddLm1 = 0;
    int evenLm1 = 0;
    int oddPre = 0;
    int evenPre = 0;
};

void _DIBBA()
{

    int n;
    cin >> n;
    vector<int> cost(n + 1);
    vector<vector<int>> graph(n + 1);

    for (int i = 1; i <= n; i++)
    {
        cin >> cost[i];
    }

    for (int i = 0; i < n - 1; i++)
    {
        int from, to;
        cin >> from >> to;

        graph[from].push_back(to);
        graph[to].push_back(from);
    }

    vector<bool> visited(n + 1, false);
    vector<int> dist(n + 1, 0);
    dist[1] = 1;
    visited[1] = true;
    vector<int> ans(n + 1);
    vector<Nd> v(n + 1);
    queue<int> q;
    q.push(1);

    while (q.size() > 0)
    {
        int from = q.front();
        q.pop();
        Nd p = v[from];
        if (dist[from] & 1)
        {
            p.oddPre += cost[from];
            p.evenPre -= cost[from];

            ans[from] = p.oddPre - p.oddLm1;
        }
        else
        {

            p.oddPre -= cost[from];
            p.evenPre += cost[from];

            ans[from] = p.evenPre - p.evenLm1;
        }

        p.oddLm1 = min(p.oddLm1, p.oddPre);
        p.evenLm1 = min(p.evenLm1, p.evenPre);

        for (int to : graph[from])
        {
            if (visited[to])
            {
                continue;
            }

            visited[to] = true;
            dist[to] = dist[from] + 1;
            v[to] = p;
            q.push(to);
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
    while (t--)
        _DIBBA();
    0;
}