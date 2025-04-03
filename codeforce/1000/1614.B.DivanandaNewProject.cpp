// link : https://codeforces.com/problemset/problem/1614/B
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
    vector<ll> times(n + 1);
    vector<ll> pos(n);
    vector<ll> perm(n + 1, 0);

    for (ll i = 1; i <= n; i++)
    {
        pos[i - 1] = i;
        cin >> times[i];
    }

    // sort
    sort(pos.begin(), pos.end(), [&times](ll a, ll b)
         { return times[a] > times[b]; });

    ll x = 1;
    ll cost = 0;
    for (ll p : pos)
    {
        perm[p] = x;
        ll u = x > 0 ? x : x * -1;
        cost += (times[p] * 2 * u);

        if (x > 0)
            x *= -1;
        else
            x = (x * -1) + 1;
    }

    cout << cost << endl;
    cout << perm[0];

    for (ll i = 1; i <= n; i++)
    {
        cout << " " << perm[i];
    }
    cout << endl;
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