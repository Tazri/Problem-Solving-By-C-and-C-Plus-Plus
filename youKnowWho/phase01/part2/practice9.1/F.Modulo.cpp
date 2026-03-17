// link : https://codeforces.com/problemset/problem/2193/E
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

void _DIBBA(int _DIBBA_NO)
{
    ll n;
    cin >> n;
    vector<ll> v(n);

    for (ll i = 0; i < n; i++)
        cin >> v[i];
    ll X;
    cin >> X;

    sort(v.begin(), v.end());

    ll mx = X % v[0];
    for (ll mask = 0; mask <= ((1LL << n) - 1); mask++)
    {
        ll x = X;
        for (ll i = n - 1; i >= 0; i--)
        {
            if ((1LL << i) & mask)
                x %= v[i];
        }

        for (ll i = 0; i < n; i++)
        {
            if (!((1LL << i) & mask))
            {
                x %= v[i];
            }
        }
        mx = max(mx, x);
    }

    cout << mx << endl;
}

int32_t main()
{
    _GORIBER_TURBO_MODE_ON();

    int t = 1;
    // cin >> t;
    for (int i = 1; i <= t; i++)
        _DIBBA(i);
    return 0;
}