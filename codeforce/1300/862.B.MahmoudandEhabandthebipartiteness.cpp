// link : https://codeforces.com/problemset/problem/862/B
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

void program()
{
    ll n;
    cin >> n;
    vector<ll> dist(n + 1, 0);
    vector<vector<ll>> graph(n + 1);

    for (ll i = 0; i < n - 1; i++)
    {
        ll from, to;
        cin >> from >> to;

        graph[from].push_back(to);
        graph[to].push_back(from);
    }
    vector<bool> visited(n + 1, false);

    queue<ll> q;
    visited[1] = true;
    q.push(1);

    while (q.size())
    {
        ll from = q.front();
        q.pop();
        for (ll to : graph[from])
        {
            if (visited[to])
                continue;
            dist[to] = dist[from] + 1;
            visited[to] = true;
            q.push(to);
        }
    }

    ll odd = 0;
    ll even = 0;

    for (ll i = 1; i <= n; i++)
        if (dist[i] & 1)
            odd++;
        else
            even++;

    ll ans = odd * even;
    ans -= (n - 1);
    cout << ans << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}