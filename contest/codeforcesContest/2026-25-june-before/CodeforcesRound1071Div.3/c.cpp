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

    for (ll &vi : v)
        cin >> vi;

    ll mn = v[0];
    for (ll i = 0; i < n; i++)
        mn = min(v[i], mn);

    sort(v.begin(), v.end());

    ll ans = mn;
    ll d = v[1] - v[0];

    if (d > mn)
        cout << d << endl;
    else
        cout << mn << endl;
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