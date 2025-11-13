// linK : https://codeforces.com/contest/1742/problem/E
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

#define endl "\n"
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define fraction()                \
    cout.unsetf(ios::floatfield); \
    cout.precision(10);           \
    cout.setf(ios::fixed, ios::floatfield);

void program()
{
    ll n, q;
    cin >> n >> q;
    vector<ll> a(n + 1, 0);
    vector<ll> h(n + 1, 0);
    for (ll i = 1; i <= n; i++)
    {
        cin >> a[i];
        h[i] = a[i];
    }

    for (ll i = 1; i <= n; i++)
    {
        h[i] += h[i - 1];
        a[i] = max(a[i], a[i - 1]);
    }

    for (ll i = 1; i <= q; i++)
    {
        ll k;
        cin >> k;

        ll ansi = 0;
        ll l = 0;
        ll r = n;

        while (l <= r)
        {
            ll mid = l + (r - l) / 2;

            if (k >= a[mid])
            {
                ansi = mid;
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }

        ll ans = h[ansi];
        cout << ans << " \n"[i == q];
    }
}

int main()
{
    optimize();
    int t;
    cin >> t;
    while (t--)
        program();
    return 0;
}