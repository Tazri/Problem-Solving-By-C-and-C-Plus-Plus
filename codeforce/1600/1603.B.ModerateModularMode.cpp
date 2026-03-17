// link : https://codeforces.com/problemset/problem/1603/B
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

void _DIBBA()
{
    ll x, y;
    cin >> x >> y;

    if (x > y)
    {
        cout << (x + y) << endl;
    }
    else if (x == y)
    {
        cout << x << endl;
    }
    else
    {
        cout << (y - ((y % x) / 2)) << endl;
    }
}

int32_t main()
{
    _GORIBER_TURBO_MODE_ON();

    int t = 1;
    cin >> t;
    while (t--)
        _DIBBA();
    return 0;
}