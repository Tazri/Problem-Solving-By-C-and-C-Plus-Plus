// link : https://codeforces.com/gym/104333/problem/A
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)
#define fraction()                \
    cout.unsetf(ios::floatfield); \
    cout.precision(10);           \
    cout.setf(ios::fixed, ios::floatfield)

ll mod = 1e9 + 7;

void program()
{
    ll n;
    cin >> n;
    vector<ll> a(n);

    for (ll i = 0; i < n; i++)
        cin >> a[i];

    vector<ll> cnt(31);

    for (ll i = 0; i < n; i++)
    {
        ll bi;
        cin >> bi;

        for (ll j = 0; j < 30; j++)
        {
            ll mask = 1 << j;
            if (bi & mask)
                cnt[j]++;
        }
    }

    // for (ll i = 0; i < 30; i++)
    //     cout << cnt[i] << " ";
    // cout << endl;

    ll sum = 0;

    for (ll i = 0; i < n; i++)
    {
        ll ai = a[i];

        for (ll j = 0; j < 30; j++)
        {
            ll one = cnt[j];
            ll zero = n - cnt[j];

            ll mask = 1 << j;
            ll contrib;
            if (ai & mask)
                contrib = zero;
            else
                contrib = one;

            sum += (contrib * mask);
            sum %= mod;
        }
    }

    ll p = 1;
    for (ll i = 1; i <= n - 1; i++)
    {
        p *= i;
        p %= mod;
    }

    sum *= p;
    sum %= mod;
    cout << sum << endl;
}

int32_t main()
{
    optimize();

    ll t = 1;
    // cin >> t;
    while (t--)
        program();
    return 0;
}