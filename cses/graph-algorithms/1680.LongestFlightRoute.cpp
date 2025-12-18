// link : https://cses.fi/problemset/task/1680/
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;

#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)
#define fraction()                \
    cout.unsetf(ios::floatfield); \
    cout.precision(10);           \
    cout.setf(ios::fixed, ios::floatfield)

ll n, m;
ll mod = 1e9 + 7;
vector<vector<ll>> graph;
vector<ll> mark;
vector<ll> srt;
bool isCycle = false;

void dfs(ll i)
{
    if (isCycle)
        return;

    if (mark[i] == 2)
        return;

    if (mark[i] == 1)
    {
        isCycle = true;
        return;
    }

    mark[i] = 1;
    for (ll to : graph[i])
    {
        dfs(to);
    }
    mark[i] = 2;
    srt.push_back(i);
}

void program()
{
    cin >> n >> m;

    graph = vector<vector<ll>>(n + 1);
    mark = vector<ll>(n + 1, 0);
    srt.reserve(n);

    for (ll i = 1; i <= m; i++)
    {
        ll from, to;
        cin >> from >> to;
        graph[from].push_back(to);
    }

    for (ll i = 1; i <= n; i++)
    {
        dfs(i);
    }
    vector<ll> dist(n + 1, 0);
    vector<ll> goTo(n + 1, 0);
    for (ll i = 0; i < n; i++)
    {
        ll ni = srt[i];

        if (ni == n)
        {
            dist[ni] = 1;
            continue;
        }

        for (int to : graph[ni])
        {
            if (dist[to] == 0)
                continue;
            dist[ni] = max(dist[ni], dist[to] + 1);
        }

        for (int to : graph[ni])
        {
            if (dist[to] == 0)
                continue;

            if (goTo[ni] == 0)
            {
                goTo[ni] = to;
                continue;
            }

            int prev = goTo[ni];
            if (dist[prev] < dist[to])
                goTo[ni] = to;
        }
    }

    vector<ll> ans;
    ans.reserve(n);

    if (goTo[1] == 0)
    {
        cout << "IMPOSSIBLE" << endl;
        return;
    }

    ans.push_back(1);
    int curr = 1;
    while (curr != n)
    {
        curr = goTo[curr];
        ans.push_back(curr);
    }

    cout << ans.size() << endl;
    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << " \n"[ans.size() - 1 == i];
}

int main()
{
    optimize();
    program();
    return 0;
}