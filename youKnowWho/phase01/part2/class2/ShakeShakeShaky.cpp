// linK: https://www.spoj.com/problems/MAIN8_C/
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

#define endl '\n'

bool ok(vector<ll> &v, ll k, ll d)
{
    if (d == 0)
        return true;
    ll left = k;

    for (ll vi : v)
    {
        ll rm = vi / d;
        left -= rm;
        if (left <= 0)
            break;
    }

    return left <= 0;
}

void program()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> v(n);

    for (ll &vi : v)
        cin >> vi;

    ll l = 0;
    ll r = 1e12;
    ll ans = 1;
    while (l <= r)
    {
        ll mid = l + (r - l) / 2;

        if (ok(v, k, mid))
        {
            ans = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }

    cout << ans << endl;
}

int main()
{
    optimize();
    ll t;
    cin >> t;
    while (t--)
        program();
    return 0;
}