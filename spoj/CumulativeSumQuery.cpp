// link : https://www.spoj.com/problems/CSUMQ/
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
    vector<ll> v(n + 1);

    for (ll i = 1; i <= n; i++)
        cin >> v[i];

    v[0] = 0;
    for (ll i = 1; i <= n; i++)
        v[i] += v[i - 1];

    ll q;
    cin >> q;
    while (q--)
    {
        ll l, r;
        cin >> l >> r;
        l++;
        r++;
        cout << v[r] - v[l - 1] << endl;
    }
}

int32_t main()
{
    optimize();
    program();
    return 0;
}