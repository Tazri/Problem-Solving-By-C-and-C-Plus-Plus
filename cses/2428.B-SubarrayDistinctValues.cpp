// link : https://cses.fi/problemset/task/2428
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

int sum(int n)
{
    return (n * (n + 1)) / 2;
}

void program()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> v(n);

    for (ll &vi : v)
        cin >> vi;

    map<ll, ll> mp;
    ll l = 0;
    ll r = 0;
    ll ans = 0;
    while (r < n)
    {
        mp[v[r]]++;

        if (mp.size() <= k)
        {
            r++;
            continue;
        }

        while (mp.size() > k)
        {
            mp[v[l]]--;

            if (mp[v[l]] == 0)
            {
                mp.erase(v[l]);
            }

            ll pr = r - 1;
            ll sub = pr - l + 1;
            l++;
            ans += sub;
        }
        r++;
    }

    ll last_index = n - 1;
    while (l < n)
    {
        ll sub = last_index - l + 1;
        l++;
        ans += sub;
    }

    cout << ans << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}