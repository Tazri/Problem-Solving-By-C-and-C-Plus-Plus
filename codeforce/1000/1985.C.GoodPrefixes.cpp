// link : https://codeforces.com/problemset/problem/1985/C
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
    map<ll, ll> mp;

    ll sum = 0;
    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        ll a;
        cin >> a;
        sum += a;
        mp[a]++;

        if (sum & 1)
            continue;

        ll h = sum / 2;

        if (mp[h])
            ans++;
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