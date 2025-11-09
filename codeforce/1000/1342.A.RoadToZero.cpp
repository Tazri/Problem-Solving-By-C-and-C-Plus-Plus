// link : https://codeforces.com/problemset/problem/1342/A
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
    ll x, y;
    cin >> x >> y;
    ll a, b;
    cin >> a >> b;

    ll mnd = min(x, y);
    ll mxd = max(x, y);
    ll xd = mxd - mnd;

    ll ans = xd * a;

    if (a + a <= b)
        ans += mnd * 2 * a;
    else
        ans += mnd * b;
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