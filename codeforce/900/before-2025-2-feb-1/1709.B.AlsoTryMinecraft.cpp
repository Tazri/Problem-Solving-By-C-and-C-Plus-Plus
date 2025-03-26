// link : https://codeforces.com/problemset/problem/1709/B
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

ll getDamage(ll frm, ll to)
{
    if (frm < to)
    {
        return 0;
    }
    return frm - to;
}

int main()
{
    optimize();
    ll n, m;
    cin >> n >> m;
    vector<ll> arr(n + 1, 0);

    for (ll i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }

    vector<ll> fArr(n + 1, 0);
    vector<ll> bArr(n + 1, 0);

    // fill up forward arr
    for (ll i = 2; i <= n; i++)
    {
        ll damage = getDamage(arr[i - 1], arr[i]);
        fArr[i] = fArr[i - 1] + damage;
    }

    // fillup backward
    for (ll i = n - 1; i >= 1; i--)
    {
        ll damage = getDamage(arr[i + 1], arr[i]);
        bArr[i] = bArr[i + 1] + damage;
    }

    for (ll i = 0; i < m; i++)
    {
        ll frm, to;
        cin >> frm >> to;

        if (frm < to)
        {
            ll damage = fArr[to] - fArr[frm];
            cout << damage << endl;
        }
        else
        {
            ll damage = bArr[to] - bArr[frm];
            cout << damage << endl;
        }
    }

    return 0;
}