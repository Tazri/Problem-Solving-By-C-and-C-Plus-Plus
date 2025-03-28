// link : https://codeforces.com/problemset/problem/1979/B
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
    ll x, y;

    cin >> x >> y;

    ll cnt = 0;
    while (x || y)
    {
        ll xrb = x & 1;
        ll yrb = y & 1;

        if (xrb != yrb)
            break;
        cnt++;
        x >>= 1;
        y >>= 1;
    }

    ll ans = 1;

    for (ll i = 0; i < cnt; i++)
        ans *= 2;
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