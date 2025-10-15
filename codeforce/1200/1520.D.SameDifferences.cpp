// link : https://codeforces.com/problemset/problem/1520/D
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

    vector<ll> v(n + 1);

    for (ll i = 1; i <= n; i++)
        cin >> v[i];

    map<ll, ll> mp;

    ll cnt = 0;
    for (ll j = 1; j <= n; j++)
    {
        ll d = v[j] - j;

        cnt += mp[d];

        mp[d]++;
    }
    cout << cnt << endl;
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