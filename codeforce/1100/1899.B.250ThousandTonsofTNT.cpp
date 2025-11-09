// link : https://codeforces.com/problemset/problem/1899/B
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
    ll mx = 0;
    ll n;
    cin >> n;
    vector<ll> v(n + 1, 0);

    for (ll i = 1; i <= n; i++)
        cin >> v[i];

    for (ll i = 1; i <= n; i++)
        v[i] += v[i - 1];

    vector<ll> d;
    d.reserve(200);

    for (ll i = 1; i * i <= n; i++)
    {
        if (n % i != 0)
            continue;

        ll d1 = i;
        ll d2 = n / i;

        d.push_back(d1);
        if (d1 != d2)
            d.push_back(d2);
    }

    ll ans = -1;
    for (ll di : d)
    {
        ll mx = -1;
        ll mn = -1;

        for (ll i = di; i <= n; i += di)
        {
            ll sum = v[i] - v[i - di];

            if (mx == -1)
                mx = sum;
            if (mn == -1)
                mn = sum;

            mx = max(sum, mx);
            mn = min(sum, mn);
        }

        ll d = mx - mn;
        ans = max(d, ans);
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