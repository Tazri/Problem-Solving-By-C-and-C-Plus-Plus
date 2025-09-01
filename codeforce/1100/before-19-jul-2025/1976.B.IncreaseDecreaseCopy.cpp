// link : https://codeforces.com/problemset/problem/1976/B
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

ll diff(ll a, ll b)
{
    return a > b ? a - b : b - a;
}

void program()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    vector<ll> b(n);

    for (ll i = 0; i < n; i++)
        cin >> a[i];

    ll op = 0;

    for (ll i = 0; i < n; i++)
    {
        cin >> b[i];

        op += (diff(a[i], b[i]));
    }

    ll l;
    cin >> l;
    ll minDiff = diff(l, a[0]);
    for (ll i = 0; i < n; i++)
    {
        ll mn = min(b[i], a[i]);
        ll mx = max(a[i], b[i]);

        if (mn <= l && l <= mx)
        {
            cout << op + 1 << endl;
            return;
        }

        ll d = min(diff(l, a[i]), diff(l, b[i]));
        minDiff = min(minDiff, d);
    }

    op += 1; // for copy
    op += minDiff;
    cout << op << endl;
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