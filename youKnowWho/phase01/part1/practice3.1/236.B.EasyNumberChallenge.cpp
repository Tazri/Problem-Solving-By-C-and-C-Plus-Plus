// link : https://codeforces.com/problemset/problem/236/B
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

ll mod = 1073741824;

void build_nod(ll n, vector<ll> &nod)
{
    nod.assign(n + 1, 1);

    for (ll i = 2; i <= n; i++)
    {
        for (ll j = i; j <= n; j += i)
        {
            nod[j]++;
        }
    }
}

void program()
{
    ll a, b, c;
    cin >> a >> b >> c;
    ll abc = a * b * c;
    vector<ll> nod;

    build_nod(abc, nod);

    ll sum = 0;

    for (ll i = 1; i <= a; i++)
        for (ll j = 1; j <= b; j++)
            for (ll k = 1; k <= c; k++)
            {
                sum += nod[i * j * k];
                sum %= mod;
            }

    cout << sum << endl;
}

int32_t main()
{
    optimize();
    program();
    return 0;
}