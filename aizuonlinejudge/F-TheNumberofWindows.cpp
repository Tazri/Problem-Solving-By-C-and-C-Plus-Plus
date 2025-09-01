// link: https://onlinejudge.u-aizu.ac.jp/problems/DSL_3_C
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

void solve(vector<ll> v, ll k)
{
    ll sum = 0;
    ll n = v.size();
    ll l = 0;
    ll r = 0;
    ll ans = 0;

    while (r < n)
    {
        sum += v[r];

        if (sum <= k)
        {
            r++;
            continue;
        }

        ll pr = r - 1;

        while (sum > k)
        {
            sum -= v[l];
            ll len = pr - l + 1;
            ans += len;
            l++;
        }
        r++;
    }

    ll pr = n - 1;
    while (l < n)
    {
        ll len = pr - l + 1;
        l++;
        ans += len;
    }
    cout << ans << endl;
}

void program()
{
    ll n, q;
    cin >> n >> q;
    vector<ll> v(n);

    for (ll &vi : v)
        cin >> vi;

    while (q--)
    {
        ll qi;
        cin >> qi;
        solve(v, qi);
    }
}

int main()
{
    optimize();
    program();
    return 0;
}