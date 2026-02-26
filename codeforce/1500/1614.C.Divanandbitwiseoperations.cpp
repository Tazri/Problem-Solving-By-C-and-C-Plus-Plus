// link : https://codeforces.com/problemset/problem/1614/C
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

ll mod = 1000000007;

long long modpow(long long a, long long b, long long mod)
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

void program()
{
    ll n, m;
    cin >> n >> m;
    vector<ll> v(n, 0);
    ll arror = 0;
    for (ll i = 0; i < m; i++)
    {
        ll l, r, x;
        cin >> l >> r >> x;
        arror |= x;
    }

    ll ans = modpow(2, n - 1, mod) * arror;
    ans %= mod;
    cout << ans << endl;

    // vector<ll> tmp = {40};
    // cout << getAns(tmp) << endl;
}

int32_t main()
{
    optimize();
    ll t = 1;
    cin >> t;
    while (t--)
        program();
    return 0;
}