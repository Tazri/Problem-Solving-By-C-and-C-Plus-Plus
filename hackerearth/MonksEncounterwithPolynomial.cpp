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

ll cal(ll a, ll b, ll c, ll x, ll k)
{
    ll xx = x * x;
    ll xxa = x * x * a;
    ll bx = b * x;
    ll res = xxa + bx + c;

    if (x >= k)
        return true;

    if (c >= k)
        return true;

    if (bx >= k)
        return true;

    if (xx >= k)
        return true;

    if (xxa >= k)
        return true;

    if (res >= k)
        return true;

    return false;
}

void program()
{
    ll a, b, c, k;
    cin >> a >> b >> c >> k;

    ll l = 0;
    ll r = k;
    ll ans = -1;

    while (l <= r)
    {
        int mid = l + (r - l) / 2;

        if (cal(a, b, c, mid, k))
        {
            ans = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
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