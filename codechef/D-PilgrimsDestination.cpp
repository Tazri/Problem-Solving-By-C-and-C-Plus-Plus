// list : https://www.codechef.com/problems/PILGRIMS
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
    ll n, m;
    cin >> n >> m;

    vector<ll> energy(m);
    for (ll i = 0; i < m; i++)
        cin >> energy[i];

    vector<vector<ll>> v(n + 1);
    vector<ll> add(n + 1);
    vector<bool> visited(n + 1, false);
    map<pair<ll, ll>, ll> mp;
    vector<ll> cnt(n + 1, 0);

    for (ll i = 0; i < n - 1; i++)
    {
        ll from, to, cost;
        cin >> from >> to >> cost;

        mp[{from, to}] = cost;
        mp[{to, from}] = cost;

        v[from].push_back(to);
        v[to].push_back(from);
        cnt[from]++;
        cnt[to]++;
    }

    queue<pair<ll, ll>> qu;

    qu.push({1, 1});

    while (!qu.empty())
    {
        pair<ll, ll> u = qu.front();
        qu.pop();

        visited[u.first] = true;

        for (ll i = 0; i < v[u.first].size(); i++)
        {
            ll vi = v[u.first][i];
            if (visited[vi])
                continue;

            add[vi] += mp[{u.first, vi}] * u.second + add[u.first];
            qu.push({vi, u.second + 1});
        }
    }

    vector<ll> costs;

    for (ll i = 2; i <= n; i++)
        if (cnt[i] == 1)
            costs.push_back(add[i]);

    sort(costs.begin(), costs.end());
    sort(energy.begin(), energy.end());

    ll ci = 0;
    ll ei = 0;
    ll ans = 0;
    while (ci < costs.size() && ei < energy.size())
    {
        if (costs[ci] <= energy[ei])
        {
            ans++;
            ci++;
        }
        ei++;
    }

    cout << ans << endl;
}

int main()
{
    optimize();
    int t;
    cin >> t;
    while (t--)
        program();
    return 0;
}