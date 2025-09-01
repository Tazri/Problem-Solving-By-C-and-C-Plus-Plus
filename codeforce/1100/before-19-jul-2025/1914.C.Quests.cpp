// link : https://codeforces.com/problemset/problem/1914/C
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
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    vector<ll> b(n);

    for (ll i = 0; i < n; i++)
        cin >> a[i];
    for (ll i = 0; i < n; i++)
        cin >> b[i];

    ll mx = 0;
    ll gain = 0;

    ll mxbi = 0;
    for (ll i = 0; i < n; i++)
    {
        if (k <= 0)
            break;

        gain += a[i];
        mxbi = max(b[i], mxbi);
        k--;
        ll canbe = gain + (k * mxbi);

        mx = max(mx, canbe);
    }

    if (k)
    {
        gain += (mxbi * k);
    }

    ll ans = max(gain, mx);

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