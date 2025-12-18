// link : https://codeforces.com/contest/276/problem/C
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
    ll n, q;
    cin >> n >> q;
    vector<ll> v(n);
    vector<pair<ll, ll>> query;
    query.reserve(q);
    for (ll &vi : v)
        cin >> vi;

    sort(v.rbegin(), v.rend());
    vector<ll> times(n + 2, 0);

    for (ll i = 0; i < q; i++)
    {
        ll l, r;
        cin >> l >> r;
        query.push_back({l, r});
        times[l]++;
        times[r + 1]--;
    }

    for (ll i = 1; i < times.size(); i++)
        times[i] += times[i - 1];

    vector<pair<ll, ll>> pi;
    pi.reserve(n);
    for (ll i = 1; i <= n; i++)
        pi.push_back({times[i], i});

    sort(pi.rbegin(), pi.rend());
    vector<ll> arr(n + 1, 0);
    ll mi = 0;
    for (pair<ll, ll> p : pi)
    {
        ll i = p.second;
        ll t = p.first;

        arr[i] = v[mi++];
    }

    for (ll i = 1; i <= n; i++)
        arr[i] += arr[i - 1];

    ll sum = 0;
    for (pair<ll, ll> qp : query)
    {
        ll l = qp.first;
        ll r = qp.second;
        sum += arr[r] - arr[l - 1];
    }
    cout << sum << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}