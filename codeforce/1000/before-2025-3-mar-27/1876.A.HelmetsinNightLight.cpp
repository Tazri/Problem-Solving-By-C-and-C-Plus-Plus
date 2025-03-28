// link : https://codeforces.com/contest/1876/problem/A
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
    ll n, p;
    cin >> n >> p;
    vector<ll> cost(n);
    vector<ll> can(n);
    vector<ll> res(n);
    vector<bool> confirm(n, false);

    for (ll i = 0; i < n; i++)
    {
        res[i] = i;
        cin >> can[i];
    }

    for (ll i = 0; i < n; i++)
        cin >> cost[i];

    // now sort
    sort(res.begin(), res.end(), [&can, &cost](ll a, ll b)
         {
        if (cost[a] == cost[b])
            return can[a] > can[b];
        return cost[a] < cost[b]; });

    ll ans = 0;
    ll i = 0;
    ll ci = 0;
    ll left = n;
    ll li = n - 1;

    while (left > 0 && i < n)
    {
        ll ri = res[i];

        if (cost[ri] >= p)
        {
            ans += (left * p);
            left = 0;
            break;
        }

        if (confirm[ri] == false)
        {
            confirm[ri] = true;
            ans += p;
            left--;
            ci++;
        }

        ll c = can[ri];

        if (left)
        {
            left--;
            ans += cost[ri];
            confirm[res[ci]] = true;
            ci++;
            c--;
        }

        for (ll t = 0; t < c; t++)
        {
            if (left <= 0)
                break;

            confirm[res[li]] = true;
            left--;
            li--;
            ans += cost[ri];
        }

        i++;
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