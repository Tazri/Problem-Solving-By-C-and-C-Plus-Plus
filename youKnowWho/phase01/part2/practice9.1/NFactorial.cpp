#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

ll mod = 1e4;
ll N = 20;
vector<ll> fact(20);

void precal()
{
    fact[0] = 1;

    for (ll i = 1; i <= N; i++)
    {
        fact[i] = fact[i - 1] * i;
        fact[i] %= mod;
    }
}

void _DIBBA(int _DIBBA_NO)
{
    ll n;
    cin >> n;
    ll ans = fact[min(n, N)];

    cout << setw(4) << setfill('0') << ans << endl;
}

int32_t main()
{
    _GORIBER_TURBO_MODE_ON();
    precal();
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++)
        _DIBBA(i);
    return 0;
}