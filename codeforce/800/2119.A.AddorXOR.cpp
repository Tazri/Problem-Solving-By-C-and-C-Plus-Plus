// link : https://codeforces.com/problemset/problem/2119/A
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'
#define int ll
#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

void _DIBBA(int _DIBBA_NO)
{
    int a, b, x, y;
    cin >> a >> b >> x >> y;

    int a1 = -1;

    if ((a ^ 1) == b)
    {
        a1 = y;
    }

    if (b < a && (a ^ 1) != b)
    {
        cout << -1 << endl;
        return;
    }

    if (b < a)
    {
        cout << y << endl;
        return;
    }
    int ans = 0;
    while (a != b)
    {
        if (a & 1)
        {
            a += 1;
            ans += x;
        }
        else
        {
            a ^= 1;
            ans += min(x, y);
        }
    }

    if (a1 != -1)
        ans = min(ans, a1);

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