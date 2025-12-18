// link : https://codeforces.com/problemset/problem/1598/C
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
    ll sum = 0;

    for (ll &vi : v)
        sum += vi;

    if ((sum * 2) % n != 0)
    {
        cout << 0 << endl;
        return;
    }

    ll k = (sum * 2) / n;

    map<ll, ll> mp;
    ll ans = 0;
    for (ll &vi : v)
    {
        ll need = k - vi;

        if (mp.count(need))
        {
            ans += mp[need];
        }

        mp[vi]++;
    }

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