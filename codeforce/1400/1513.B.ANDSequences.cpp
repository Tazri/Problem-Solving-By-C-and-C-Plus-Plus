// link : https://codeforces.com/problemset/problem/1513/B
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

#define int ll

ll mod = 1e9 + 7;
ll SZ = 2e5 + 5;

vector<ll> fact(SZ);
vector<ll> ifact(SZ);

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

ll nCr(ll n, ll r)
{
    if (r > n || r < 0)
        return 0;
    return (fact[n] * ifact[r] % mod) * ifact[n - r] % mod;
}

void build()
{
    fact[0] = 1;
    for (int i = 1; i < SZ; i++)
    {
        fact[i] = fact[i - 1] * i % mod;
    }

    ifact[SZ - 1] = bigmod(fact[SZ - 1], mod - 2, mod);

    for (int i = SZ - 2; i >= 0; i--)
    {
        ifact[i] = ifact[i + 1] * (i + 1) % mod;
    }
}

void _DIBBA(int _DIBBA_NO)
{
    int n;
    cin >> n;

    vector<int> v(n);
    int st;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];

        if (i == 0)
            st = v[i];

        st &= v[i];
    }

    int cnt = 0;

    for (int i = 0; i < n; i++)
        if (v[i] == st)
            cnt++;

    if (cnt < 2)
    {
        cout << 0 << endl;
        return;
    }

    int perm = fact[cnt];
    int slot = n - 2;
    int nnst = n - cnt;
    int nnstPerm = fact[nnst];
    int slotDistro = nCr(slot, cnt - 2);
    int rightCal = nnstPerm * slotDistro % mod;

    int ans = rightCal * perm % mod;

    cout << ans << endl;
}

int32_t main()
{
    _GORIBER_TURBO_MODE_ON();
    build();
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++)
        _DIBBA(i);
    return 0;
}