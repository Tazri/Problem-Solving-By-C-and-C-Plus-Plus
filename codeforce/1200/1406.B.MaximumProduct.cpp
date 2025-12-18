// link : https://codeforces.com/problemset/problem/1406/B
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

    sort(v.begin(), v.end());

    ll mx = 0;
    ll res = 1;

    for (ll i = 0; i < 5; i++)
        res *= v[i];
    mx = res;
    ll w = n - 5;
    ll l = 0;
    ll r = w - 1;

    while (r < n)
    {
        res = 1;
        for (ll i = 0; i < l; i++)
            res *= v[i];
        for (ll i = r + 1; i < n; i++)
            res *= v[i];
        mx = max(mx, res);
        r++;
        l++;
    }

    cout << mx << endl;
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