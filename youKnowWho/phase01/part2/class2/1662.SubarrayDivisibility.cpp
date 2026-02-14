// link:  https://cses.fi/problemset/task/1662/
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

long long llmod(long long a, long long mod)
{
    return ((a % mod) + mod) % mod;
}

void program()
{
    ll n;
    cin >> n;
    vector<ll> v(n + 1);

    for (ll i = 1; i <= n; i++)
        cin >> v[i];

    vector<ll> pre(n + 1, 0);

    for (ll i = 1; i <= n; i++)
    {
        pre[i] = v[i];
        pre[i] += pre[i - 1];
    }

    for (ll i = 0; i <= n; i++)
        pre[i] = llmod(pre[i], n);

    map<ll, ll> mp;
    mp[pre[0]] = 1;
    ll cnt = 0;
    for (ll i = 1; i <= n; i++)
    {
        if (mp.count(pre[i]))
        {
            cnt += mp[pre[i]];
        }
        mp[pre[i]]++;
    }

    cout << cnt << endl;
}

int32_t main()
{
    optimize();
    program();
    return 0;
}