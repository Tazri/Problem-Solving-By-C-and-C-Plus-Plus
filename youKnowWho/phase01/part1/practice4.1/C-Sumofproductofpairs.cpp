// link : https://atcoder.jp/contests/abc177/tasks/abc177_c
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

ll mod = 1e9 + 7;

void program()
{
    ll n;
    cin >> n;
    vector<ll> v(n);
    vector<ll> suffix(n + 1, 0);

    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    for (ll i = n - 1; i >= 0; i--)
    {
        suffix[i] = v[i] + suffix[i + 1];
    }

    ll ans = 0;

    for (ll i = 0; i < n; i++)
    {
        ll add = v[i] * (suffix[i + 1] % mod);
        ans += add;
        ans %= mod;
    }

    cout << ans << endl;
}

int32_t main()
{
    optimize();
    program();
    return 0;
}