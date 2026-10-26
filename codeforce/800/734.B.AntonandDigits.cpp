// link : https://codeforces.com/contest/734/problem/B
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

#define fraction()                \
    cout.unsetf(ios::floatfield); \
    cout.precision(10);           \
    cout.setf(ios::fixed, ios::floatfield)

void _DIBBA()
{
    int k2, k3, k5, k6;
    cin >> k2 >> k3 >> k5 >> k6;

    int mn = min({k2, k5, k6});
    int ans = (256 * mn);
    k2 -= mn;
    mn = min(k2, k3);
    ans += mn * 32;

    cout << ans << endl;
}

int32_t main()
{
    _GORIBER_TURBO_MODE_ON();

    int t = 1;
    // cin >> t;
    while (t--)
        _DIBBA();
    0;
}