// link : https://codeforces.com/problemset/problem/455/A
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

ll sz = 1e5;
vector<ll> mp;
vector<ll> dp;

void program()
{
    ll n;
    cin >> n;

    vector<ll> v(n);
    ll mx = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];

        mx = max(mx, v[i]);
    }

    sz = mx;
    mp = vector<ll>(sz + 10, 0);
    dp = vector<ll>(sz + 10, 0);
    for (ll &vi : v)
        mp[vi] += vi;

    for (ll i = sz; i >= 0; i--)
    {
        ll r1 = mp[i] + dp[i + 2];
        ll r2 = dp[i + 1];

        ll res = max(r1, r2);
        dp[i] = res;
    }

    cout << dp[0] << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}