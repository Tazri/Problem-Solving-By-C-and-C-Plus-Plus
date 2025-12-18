// link : https://codeforces.com/problemset/problem/2051/D
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

void program()
{
    ll n, x, y;
    cin >> n >> x >> y;
    vector<ll> v(n);
    ll sum = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
        sum += v[i];
    }

    sort(v.begin(), v.end());

    ll ans = 0;
    for (ll i = 0; i < n - 1; i++)
    {
        ll l = i + 1;
        ll r = n - 1;
        ll lower = -1;
        ll upper = -1;

        while (l <= r)
        {
            ll mid = l + (r - l) / 2;

            if (sum - v[i] - v[mid] <= y)
            {
                r = mid - 1;
                lower = mid;
            }
            else
            {
                l = mid + 1;
            }
        }
        if (lower == -1)
            continue;

        l = i + 1;
        r = n - 1;
        while (l <= r)
        {
            ll mid = l + (r - l) / 2;

            if (sum - v[i] - v[mid] >= x)
            {
                upper = mid;
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
        if (upper == -1)
            continue;
        if (lower > upper)
            continue;
        ll cnt = upper - lower + 1;
        ans += cnt;
    }

    cout << ans << endl;
}

int main()
{
    optimize();
    ll t;
    cin >> t;
    while (t--)
    {
        program();
    }

    return 0;
}