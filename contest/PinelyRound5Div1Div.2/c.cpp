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
    ll n, x;

    cin >> n >> x;
    vector<ll> v(n);
    multiset<ll> mt;
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
        mt.insert(v[i]);
    }

    vector<ll> ansV;
    ansV.reserve(n);
    ll s = 0;
    ll ans = 0;
    while (mt.size())
    {
        ll need = x - s;

        if (mt.lower_bound(need) == mt.end())
        {
            s += *mt.begin();
            mt.erase(mt.begin());
            continue;
        }

        s += (*mt.lower_bound(need));
        s %= x;
        ans += *mt.lower_bound(need);
        mt.erase(mt.lower_bound(need));
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