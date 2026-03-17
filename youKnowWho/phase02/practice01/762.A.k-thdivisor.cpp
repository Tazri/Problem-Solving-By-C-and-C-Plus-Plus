// link : https://codeforces.com/problemset/problem/762/A
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

void _DIBBA(int _DIBBA_NO)
{
    ll n, k;
    cin >> n >> k;
    vector<ll> d;

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
    sort(d.begin(), d.end());

    if (k > d.size())
        cout << -1 << endl;
    else
        cout << d[k - 1] << endl;
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