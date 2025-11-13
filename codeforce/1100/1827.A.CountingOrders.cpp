// link : https://codeforces.com/problemset/problem/1827/A
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

const ll mod = 1e9 + 7;

void program()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    vector<ll> b(n);

    for (ll &ai : a)
        cin >> ai;

    for (ll &bi : b)
        cin >> bi;

    sort(a.begin(), a.end());
    sort(b.rbegin(), b.rend());

    vector<ll> cnt(n);

    for (ll i = 0; i < n; i++)
    {
        ll bi = b[i];

        auto it = upper_bound(a.begin(), a.end(), bi);
        if (it == a.end())
        {
            cout << 0 << endl;
            return;
        }
        ll index = it - a.begin();
        cnt[i] = index;
    }

    for (ll i = 0; i < n; i++)
    {
        cnt[i]++;
        ll total = n - cnt[i] + 1;
        cnt[i] = total;
        cnt[i] -= i;

        if (cnt[i] <= 0)
        {
            cout << 0 << endl;
            return;
        }
    }

    ll ans = 1;
    for (ll &ci : cnt)
    {
        ans *= ci;
        ans %= mod;
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