// link : https://codeforces.com/problemset/problem/1825/B
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
    ll n, m;
    cin >> n >> m;
    ll mn = LLONG_MAX;
    ll smn = LLONG_MAX;
    ll mx = LLONG_MIN;
    ll smx = LLONG_MIN;

    for (ll i = 0; i < n * m; i++)
    {
        ll ai;
        cin >> ai;

        if (i == 0)
        {
            // insure has mn and mx
            mn = ai;
            mx = ai;
            continue;
        }

        if (ai < mn)
        {
            smn = mn;
            mn = ai;
        }
        else if (ai == mn)
            smn = mn;
        else if (ai < smn)
            smn = ai;

        if (ai > mx)
        {
            smx = mx;
            mx = ai;
        }
        else if (ai == mx)
            smx = mx;
        else if (ai > smx)
            smx = ai;
    }

    ll tb = n * m;
    ll mtb = min(n, m) - 1;
    tb -= (mtb + 1);

    ll ans = (mx - mn) * tb;
    ll mxd = max(mx - smn, smx - mn);
    ans += (mtb * mxd);
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

/*
2 2
99277 2662 17651 -53312
401793 -> expected
457767
*/