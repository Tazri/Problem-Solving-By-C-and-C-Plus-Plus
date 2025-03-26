// link : https://codeforces.com/problemset/problem/1697/B
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

int main()
{
    optimize();
    ll n, q;
    cin >> n >> q;
    vector<ll> price(n);

    for (ll i = 0; i < n; i++)
    {
        cin >> price[i];
    }

    // sort
    sort(price.begin(), price.end(), [](ll a, ll b)
         { return a > b; });

    price.insert(price.begin(), 0);

    // sum it
    price[0] = 0;
    for (ll i = 1; i <= n; i++)
    {
        price[i] = price[i - 1] + price[i];
    }

    for (ll i = 0; i < q; i++)
    {
        ll x, y;
        cin >> x >> y;
        ll ans = price[x];
        ans -= price[x - y];
        cout << ans << endl;
    }
    return 0;
}