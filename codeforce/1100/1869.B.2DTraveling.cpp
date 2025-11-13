// link : https://codeforces.com/problemset/problem/1869/B
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

ll dis(pair<ll, ll> a, pair<ll, ll> b)
{
    ll d = abs(a.first - b.first) + abs(a.second - b.second);
    return d;
}

void program()
{
    ll n, k, a, b;
    cin >> n >> k >> a >> b;
    vector<pair<ll, ll>> c(n + 1);

    for (ll i = 1; i <= n; i++)
    {
        cin >> c[i].first >> c[i].second;
    }

    if (a <= k && b <= k)
    {
        cout << 0 << endl;
        return;
    }

    if (a <= k)
    {
        ll ans = dis(c[1], c[b]);

        for (ll i = 1; i <= k; i++)
            ans = min(ans, dis(c[i], c[b]));

        cout << ans << endl;
        return;
    }

    if (b <= k)
    {
        ll ans = dis(c[1], c[a]);

        for (ll i = 1; i <= k; i++)
            ans = min(ans, dis(c[i], c[a]));

        cout << ans << endl;
        return;
    }

    ll direct = dis(c[a], c[b]);

    if (k == 0)
    {
        cout << direct << endl;
        return;
    }

    ll amn = dis(c[1], c[a]);

    for (ll i = 1; i <= k; i++)
        amn = min(amn, dis(c[i], c[a]));

    ll bmn = dis(c[1], c[b]);

    for (ll i = 1; i <= k; i++)
        bmn = min(bmn, dis(c[i], c[b]));

    ll indirect = amn + bmn;
    cout << min(indirect, direct) << endl;
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