// link : https://codeforces.com/contest/2228/problem/B
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

void _DIBBA(int _DIBBA_NO)
{
    int n, x1, x2, k;
    cin >> n >> x1 >> x2 >> k;

    if (n <= 3)
    {
        cout << 1 << endl;
        return;
    }

    int ans = k;

    int d1 = abs(x1 - x2);
    int d2 = n - (d1 + 1) + 1;

    if (d1 == d2)
    {
        ans = 1 + (k - 1) + d1;
        cout << ans << endl;
        return;
    }
    ans += min(d1, d2);

    cout << ans << endl;
}

int32_t main()
{
    _GORIBER_TURBO_MODE_ON();

    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++)
        _DIBBA(i);
    return 0;
}