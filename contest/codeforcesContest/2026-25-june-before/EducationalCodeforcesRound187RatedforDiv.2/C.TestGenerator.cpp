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

void program()
{
    ll s, m;
    cin >> s >> m;
    ll sum = s;
    vector<ll> v;
    v.reserve(64);

    for (ll i = 0; i < 63; i++)
    {
        ll mask = 1LL << i;
        if (m & mask)
        {
            v.push_back(mask);
        }
    }

    map<ll, ll> mp;
    reverse(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++)
    {
        if (s == 0)
            break;

        ll can = s / v[i];
        mp[v[i]] = can;
    }

    vector<pair<ll, ll>> vp;
    for (pair<ll, ll> p : mp)
    {
        vp.push_back(p);
    }

    reverse(vp.begin(), vp.end());

    ll ans = 0;

    for (pair<ll, ll> &p : vp)
    {

        ll d = p.first * p.second;
        cout << p.first << " -> " << p.second << endl;
        if (d > sum)
        {
            continue;
        }
        sum -= d;
        ans += p.second;
    }

    // cout << "mx : " << mx << endl;
    cout << ans << endl;
}

int32_t main()
{
    optimize();

    int t = 1;
    cin >> t;
    while (t--)
        program();
    return 0;
}