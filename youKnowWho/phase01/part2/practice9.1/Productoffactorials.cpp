#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
typedef __int128 i128;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

ll fact[(ll)1e7 + 123];

i128 mod = 109546051211;

void _DIBBA()
{
    ll n;
    cin >> n;
    ll ans = 1;
    fact[0] = 1;
    for (ll i = 1; i <= n; i++)
    {
        fact[i] = fact[i - 1] * i;
        fact[i] = (i128)fact[i] % mod;
    }

    for (ll i = 1; i <= n; i++)
    {
        ans = (i128)ans * fact[i] % mod;
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
    return 0;
}