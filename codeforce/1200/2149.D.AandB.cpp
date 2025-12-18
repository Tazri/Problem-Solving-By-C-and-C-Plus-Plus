// link:  https://codeforces.com/problemset/problem/2149/D
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
    string s;
    cin >> s;

    vector<ll> a(n);
    vector<ll> b(n);

    for (ll i = 0; i < n; i++)
        if (s[i] == 'a')
            a[i] = 1;
        else
            b[i] = 1;

    for (ll i = 1; i < n; i++)
    {
        a[i] += a[i - 1];
        b[i] += b[i - 1];
    }

    ll bcnt = b.back();
    ll acnt = a.back();
    ll ans1 = 0;
    ll ans2 = 0;

    for (ll i = 0; i < n; i++)
    {
        if (s[i] == 'a')
        {
            ll c1 = b[i];
            ll c2 = bcnt - b[i];
            ans1 += min(c1, c2);
        }
        else
        {
            ll c1 = a[i];
            ll c2 = acnt - a[i];
            ans2 += min(c1, c2);
        }
    }

    cout << min(ans1, ans2) << endl;
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