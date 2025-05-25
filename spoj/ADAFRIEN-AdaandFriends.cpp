// link : https://www.spoj.com/problems/ADAFRIEN/en/
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
    ll n, c;
    cin >> n >> c;
    map<string, ll> mp;
    vector<ll> costs;
    costs.reserve(n);

    for (ll i = 0; i < n; i++)
    {
        string name;
        ll cost;
        cin >> name >> cost;
        mp[name] += cost;
    }

    for (pair<string, ll> p : mp)
        costs.push_back(p.second);

    sort(costs.begin(), costs.end(), [](ll a, ll b)
         { return a > b; });

    ll ans = 0;
    for (ll i = 0; i < costs.size(); i++)
    {
        if (c <= 0)
            break;

        ans += costs[i];
        c--;
    }

    cout << ans << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}