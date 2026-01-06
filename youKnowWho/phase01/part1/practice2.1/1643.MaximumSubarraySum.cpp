// link : https://cses.fi/problemset/task/1643
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

    for (ll &vi : v)
        cin >> vi;

    ll mx = LONG_LONG_MIN;
    ll sum = 0;
    for (ll i = 0; i < n; i++)
    {
        sum = max(v[i], sum + v[i]);
        mx = max(mx, sum);
    }

    cout << mx << endl;
}

int32_t main()
{
    optimize();
    program();
    return 0;
}