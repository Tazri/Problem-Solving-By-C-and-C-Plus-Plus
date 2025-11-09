// link : https://codeforces.com/problemset/problem/1418/A
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

ll ceilDiv(ll a, ll b)
{
    return (a + b - 1) / b;
}

void program()
{
    ll a, b, k;
    cin >> a >> b >> k;
    ll demand = (b * k) + k;

    ll ans = k;
    ll mx = ceilDiv(demand, a - 1);

    if ((mx - 1) * (a - 1) + 1 == demand)
        ans += mx - 1;
    else
        ans += mx;
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