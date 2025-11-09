// link : https://codeforces.com/problemset/problem/1399/B
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
    vector<ll> a(n);
    vector<ll> b(n);

    ll mna = 0;
    ll mnb = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        if (i == 0)
            mna = a[i];
        mna = min(mna, a[i]);
    }

    for (ll i = 0; i < n; i++)
    {
        cin >> b[i];
        if (i == 0)
            mnb = b[i];
        mnb = min(mnb, b[i]);
    }

    ll moves = 0;
    for (ll i = 0; i < n; i++)
    {
        ll extra = a[i] - mna;
        ll extrb = b[i] - mnb;

        ll mn = min(extra, extrb);

        extra -= mn;
        extrb -= mn;
        moves += extra + extrb + mn;
    }

    cout << moves << endl;
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