// link : https://codeforces.com/problemset/problem/1607/B
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
    ll x, n;
    cin >> x >> n;

    if (n % 4 == 0)
    {
        cout << x << endl;
        return;
    }

    ll r = n % 4;
    vector<ll> v;
    for (ll i = 0; i < r; i++)
    {
        v.push_back(n);
        n--;
    }
    reverse(v.begin(), v.end());

    ll f = v[0];
    ll rest = 0;
    for (ll i = 1; i < v.size(); i++)
        rest += v[i];

    if (x % 2 == 0)
    {
        x += rest;
        x -= f;
    }
    else
    {
        x += f;
        x -= rest;
    }

    cout << x << endl;
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