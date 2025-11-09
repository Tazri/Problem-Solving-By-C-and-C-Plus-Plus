// linK : https://codeforces.com/problemset/problem/459/B
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
    ll n;
    cin >> n;
    vector<ll> v(n);

    ll mn, mx;

    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];

        if (i == 0)
        {
            mn = v[i];
            mx = v[i];
        }
        mn = min(mn, v[i]);
        mx = max(mx, v[i]);
    }

    ll mxCount = 0;
    ll mnCount = 0;

    for (ll vi : v)
    {
        if (vi == mx)
            mxCount++;
        if (vi == mn)
            mnCount++;
    }

    ll a1 = mx - mn;
    ll a2 = 0;
    if (mn == mx)
    {
        ll l = mnCount - 1;
        a2 = ((l + 1) * l) / 2;
    }
    else
        a2 = mxCount * mnCount;

    cout << a1 << " " << a2 << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}