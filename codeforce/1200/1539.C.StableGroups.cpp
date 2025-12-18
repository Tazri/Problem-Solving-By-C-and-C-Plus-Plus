// link : https://codeforces.com/contest/1539/problem/C
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

#define endl "\n"
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define fraction()                \
    cout.unsetf(ios::floatfield); \
    cout.precision(10);           \
    cout.setf(ios::fixed, ios::floatfield);

void program()
{
    ll n, k, x;
    cin >> n >> k >> x;

    vector<ll> v(n);

    for (ll i = 0; i < n; i++)
        cin >> v[i];

    sort(v.begin(), v.end());

    vector<pair<ll, ll>> p;
    p.reserve(n);

    for (ll i = 1; i < n; i++)
    {
        if (abs(v[i] - v[i - 1]) > x)
        {
            p.push_back({v[i - 1], v[i]});
        }
    }

    ll ans = p.size() + 1;
    ll rm = 0;
    ll can = k;
    vector<ll> need;
    need.reserve(n);
    for (auto pr : p)
    {
        ll l = pr.first;
        ll r = pr.second;
        ll diff = abs(l - r);

        if (diff % x == 0)
            need.push_back((diff / x) - 1);
        else
            need.push_back(diff / x);
    }

    sort(need.begin(), need.end());

    for (ll ni : need)
    {
        if (ni > can)
            break;

        rm++;
        can -= ni;
    }

    ans -= rm;
    cout << ans << endl;
}

int main()
{
    optimize();
    program();

    return 0;
}