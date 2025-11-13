// https://codeforces.com/contest/1807/problem/G1
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
    vector<ll> pre(n);

    for (ll &vi : v)
        cin >> vi;
    sort(v.begin(), v.end());

    for (ll i = 0; i < n; i++)
    {
        if (i == 0)
            pre[i] = v[i];
        else
            pre[i] = pre[i - 1] + v[i];
    }

    if (v[0] != 1)
    {
        cout << "NO" << endl;
        return;
    }

    for (ll i = 1; i < n; i++)
    {
        if (1 <= v[i] && v[i] <= pre[i - 1])
            continue;

        cout << "NO" << endl;
        return;
    }

    cout << "YES" << endl;
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