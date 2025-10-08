// link : https://cses.fi/problemset/task/1071
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

ll startNumber(ll n)
{
    ll s = ((n - 1) * (n - 1)) + 1;
    return s;
}

ll getLayer(ll rw, ll cl)
{
    return max(rw, cl);
}

ll getTl(ll rw, ll cl)
{
    return min(rw, cl);
}

void program()
{
    ll rw, cl;
    cin >> rw >> cl;

    ll l = getLayer(rw, cl);
    ll tl = getTl(rw, cl);

    ll s = startNumber(l);

    if (rw % 2 == 0 && cl % 2 == 0)
    {
        ll has = (2 * l - 1);
        tl = has - tl + 1;

        ll ans = s + tl - 1;
        cout << ans << endl;
        return;
    }
    else if (rw % 2 == 1 && cl % 2 == 1)
    {
        int ans = s + tl - 1;
        cout << ans << endl;
        return;
    }
    // int ans = s + tl - 1;
    // cout << ans << endl;
    cout << "skip" << endl;
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