#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)
#define fraction()                \
    cout.unsetf(ios::floatfield); \
    cout.precision(10);           \
    cout.setf(ios::fixed, ios::floatfield)

void program()
{
    ll n;
    cin >> n;
    vector<ll> prefix(n + 1);

    for (ll i = 1; i <= n; i++)
    {
        cin >> prefix[i];
        prefix[i] ^= prefix[i - 1];
    }

    ll ans = 0;

    for (ll l = 1; l <= n; l++)
    {
        for (ll r = l; r <= n; r++)
        {
            ll xr = prefix[r] ^ prefix[l - 1];
            ans += xr;
        }
    }

    cout << ans << endl;
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