// link : https://codeforces.com/problemset/problem/1620/B
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
    ll w, h;
    cin >> w >> h;
    vector<ll> x;

    ll k;
    cin >> k;
    for (ll i = 0; i < k; i++)
    {
        ll xi;
        cin >> xi;
        x.push_back(xi);
    }
    ll diff = abs(x.front() - x.back());

    x.clear();

    cin >> k;
    for (ll i = 0; i < k; i++)
    {
        ll xi;
        cin >> xi;
        x.push_back(xi);
    }

    diff = max(diff, abs(x.front() - x.back()));
    ll xans = diff * h;

    vector<ll> y;
    cin >> k;
    for (ll i = 0; i < k; i++)
    {
        ll yi;
        cin >> yi;
        y.push_back(yi);
    }
    ll d = y.back() - y.front();

    y.clear();
    cin >> k;
    for (ll i = 0; i < k; i++)
    {
        ll yi;
        cin >> yi;
        y.push_back(yi);
    }
    d = max(d, y.back() - y.front());
    ll yans = d * w;
    ll ans = max(yans, xans);

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