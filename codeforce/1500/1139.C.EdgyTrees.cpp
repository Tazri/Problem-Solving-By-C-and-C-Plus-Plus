// link : https://codeforces.com/contest/1139/problem/C
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

int mod = ((int)1e9) + 7;

long long bigmod(long long a, long long b, long long mod)
{
    long long res = 1;
    a %= mod;
    while (b > 0)
    {
        if (b & 1)
            res = res * a % mod;
        a = a * a % mod;
        b >>= 1;
    }
    return res;
}

struct MP
{
    map<pair<int, int>, bool> mp;

    void set(pair<int, int> key, bool v)
    {
        pair<int, int> pr;
        pr.first = min(key.first, key.second);
        pr.second = max(key.first, key.second);
        mp[pr] = v;
    }

    bool get(pair<int, int> key)
    {
        pair<int, int> pr;
        pr.first = min(key.first, key.second);
        pr.second = max(key.first, key.second);
        return mp[pr];
    }
};

void _DIBBA()
{
    int n, k;
    cin >> n >> k;

    vector<vector<int>> graph(n + 1);
    MP mp;

    for (int i = 0; i < n - 1; i++)
    {
        int from, to, color;
        cin >> from >> to >> color;
        bool c = color ? true : false;
        graph[from].push_back(to);
        graph[to].push_back(from);
        mp.set({from, to}, c);
    }

    int ans = bigmod(n, k, mod);

    vector<bool> vis(n + 1, false);

    for (int i = 1; i <= n; i++)
    {
        if (vis[i])
            continue;

        int cnt = 0;

        queue<int> q;
        q.push(i);
        vis[i] = true;

        while (q.size() > 0)
        {
            int from = q.front();
            q.pop();
            cnt++;

            for (int to : graph[from])
            {
                if (vis[to])
                    continue;

                if (mp.get({from, to}))
                    continue;

                vis[to] = true;
                q.push(to);
            }
        }

        int mn = bigmod(cnt, k, mod);
        ans -= mn;
        if (ans < 0)
            ans += mod;
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
    0;
}