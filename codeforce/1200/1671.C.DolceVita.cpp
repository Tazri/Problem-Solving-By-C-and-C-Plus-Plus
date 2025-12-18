// link : https://codeforces.com/problemset/problem/1671/C
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
    ll n, k;
    cin >> n >> k;

    vector<ll> v(n);

    for (ll &vi : v)
        cin >> vi;

    sort(v.begin(), v.end());
    for (ll i = 1; i < n; i++)
        v[i] += v[i - 1];

    ll start = -1;

    for (ll i = 0; i < n; i++)
        if (v[i] <= k)
            start = i;
        else
            break;

    if (start == -1)
    {
        cout << 0 << endl;
        return;
    }

    ll gone = 0;
    ll el = 0;
    ll cnt = 0;
    for (ll i = start; i >= 0; i--)
    {
        ll el = i + 1;
        ll add = gone * el;

        if (v[i] + add > k)
            continue;

        ll d = k - (v[i] + add);

        cnt += el;
        gone += 1;

        ll can = d / el;

        gone += can;

        cnt += el * can;
    }

    cout << cnt << endl;
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