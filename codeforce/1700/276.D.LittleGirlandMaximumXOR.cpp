// link : https://codeforces.com/problemset/problem/276/D
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
    ll l, r;
    cin >> l >> r;

    ll ans = 0;

    for (ll i = 0; i < 63; i++)
    {
        ll mask = 1LL << i;
        ll lb = !!(l & mask);
        ll rb = !!(r & mask);

        if (lb != rb)
        {
            ans |= mask;
            continue;
        }

        if (lb == 0)
        {
            ll x = l | mask;

            if (l <= x && x <= r)
                ans |= mask;
            continue;
        }

        ll x = r ^ mask;
        if (l <= x && x <= r)
            ans |= mask;
    }

    cout << ans << endl;
}

int32_t main()
{
    optimize();
    program();
    return 0;
}