// link : https://codeforces.com/problemset/problem/1355/A
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
    vector<ll> v;
    v.push_back(n);
    for (ll i = 1; i <= k; i++)
    {
        ll mn = -1;
        ll mx = -1;
        ll cn = n;
        while (cn)
        {
            ll d = cn % 10;
            if (mn == -1)
                mn = d;
            if (mx == -1)
                mx = d;
            mn = min(d, mn);
            mx = max(d, mx);
            cn /= 10;
        }

        ll add = mn * mx;
        n += add;

        if (v.back() == n)
            break;
        v.push_back(n);
    }

    if (v.size() >= k)
    {
        cout << v[k - 1] << endl;
    }
    else
        cout << v.back() << endl;
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