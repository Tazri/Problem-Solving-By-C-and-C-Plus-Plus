// link : https://codeforces.com/problemset/problem/433/B
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
    vector<ll> a(n + 1), b(n + 1);

    for (ll i = 1; i <= n; i++)
    {
        ll ai;
        cin >> ai;
        a[i] = ai;
        b[i] = ai;
    }

    sort(b.begin(), b.end());
    for (ll i = 1; i <= n; i++)
    {
        a[i] += a[i - 1];
        b[i] += b[i - 1];
    }

    ll q;
    cin >> q;

    while (q--)
    {
        ll t, l, r;
        cin >> t >> l >> r;

        ll ans = 0;
        if (t == 1)
            ans = a[r] - a[l - 1];
        else
            ans = b[r] - b[l - 1];

        cout << ans << endl;
    }
}

int main()
{
    optimize();
    program();
    return 0;
}