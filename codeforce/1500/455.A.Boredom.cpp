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

ll solve(ll i)
{
    if (i > sz)
        return 0;

    if (dp[i] != -1)
        return dp[i];

    ll r1 = mp[i] + solve(i + 2);
    ll r2 = solve(i + 1);

    ll res = max(r1, r2);
    dp[i] = res;
    return res;
}

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
    mp = vector<ll>(sz + 1, 0);
    dp = vector<ll>(sz + 1, -1);
    for (ll &vi : v)
        mp[vi] += vi;

    ll ans = solve(0);

    cout << ans << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}