// link : https://cses.fi/problemset/task/1681/
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
    vector<ll> ans(n + 1, 0);
    for (ll i = 0; i < n; i++)
    {
        ll ni = srt[i];

        if (ni == n)
        {
            ans[ni] = 1;
            continue;
        }

        for (ll to : graph[ni])
        {
            ans[ni] += ans[to];
            ans[ni] %= mod;
        }
    }

    cout << ans[1] << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}