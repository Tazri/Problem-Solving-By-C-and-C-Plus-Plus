// link : https://codeforces.com/problemset/problem/1554/A
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

    for (ll i = 0; i < n; i++)
        cin >> v[i];

    ll mx = 0;
    for (ll i = 1; i < n; i++)
    {
        ll vi = v[i] * v[i - 1];
        if (mx == 0)
            mx = vi;
        mx = max(vi, mx);
    }
    cout << mx << endl;
}

int32_t main()
{
    optimize();
    ll t;
    cin >> t;

    while (t--)
        program();

    return 0;
}