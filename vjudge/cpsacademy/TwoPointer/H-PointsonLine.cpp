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

ll count(ll len)
{
    len--;
    ll n = len - 1;

    ll cnt = (n * (n + 1)) / 2;
    return cnt;
}

void program()
{
    ll n, d;
    cin >> n >> d;
    vector<ll> v(n);

    for (ll &vi : v)
        cin >> vi;

    ll l = 0;
    ll r = 0;
    ll ans = 0;
    while (r < n)
    {
        ll diff = abs(v[r] - v[l]);
        if (diff <= d)
        {
            r++;
            continue;
        }

        ll pr = r - 1;
        ll len = pr - l + 1;

        if (len < 3)
        {
            l++;
            continue;
        }
        ans += count(len);
        l++;
    }

    while (l < n)
    {
        ll ri = n - 1;
        ll len = ri - l + 1;

        if (len >= 3)
        {
            ans += count(len);
        }
        l++;
    }

    cout << ans << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}