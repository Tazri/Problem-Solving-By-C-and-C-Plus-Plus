// link : https://codeforces.com/problemset/problem/1985/E
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
    ll x, y, z, k;
    cin >> x >> y >> z >> k;

    ll ans = 0;
    for (ll xi = 1; xi <= x; xi++)
    {
        for (ll yi = 1; yi <= y; yi++)
        {
            ll xiyi = xi * yi;

            if (k % xiyi != 0)
                continue;

            ll zi = k / xiyi;

            if (zi > z)
                continue;

            ll d1 = x - xi + 1;
            ll d2 = y - yi + 1;
            ll d3 = z - zi + 1;
            ll d = d1 * d2 * d3;

            ans = max({d, ans});
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