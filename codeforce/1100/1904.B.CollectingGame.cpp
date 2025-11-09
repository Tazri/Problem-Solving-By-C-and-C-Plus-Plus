// link : https://codeforces.com/problemset/problem/1904/B
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
    vector<ll> v(n);
    vector<ll> vs(n);
    vector<ll> pre(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
        vs[i] = v[i];
        pre[i] = v[i];
    }

    sort(pre.begin(), pre.end());
    for (ll i = 1; i < n; i++)
        pre[i] += pre[i - 1];

    sort(vs.begin(), vs.end());

    map<ll, ll> mp;
    for (ll i = n - 1; i >= 0; i--)
    {
        if (i == n - 1)
        {
            mp[vs[i]] = i;
            continue;
        }

        if (pre[i] >= vs[i + 1])
        {
            mp[vs[i]] = mp[vs[i + 1]];
        }
        else
        {
            mp[vs[i]] = i;
        }
    }

    for (ll i = 0; i < n; i++)
    {
        v[i] = mp[v[i]];
    }

    for (ll i = 0; i < n; i++)
        cout << v[i] << " \n"[i == n - 1];
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