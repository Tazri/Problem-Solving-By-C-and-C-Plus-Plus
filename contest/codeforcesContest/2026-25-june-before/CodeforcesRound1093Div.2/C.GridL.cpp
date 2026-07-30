#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

#define int ll

void _DIBBA(int _DIBBA_NO)
{
    int l, L;
    cin >> l >> L;

    int x = l + (L * 2);

    if (x < 4)
    {
        cout << -1 << endl;
        return;
    }

    for (int m = 1; m <= 2e5; m++)
    {
        int n = x - m;

        if (n == 0)
            continue;

        int d = 1 + (2 * m);

        if (n % d != 0)
            continue;

        n = n / d;

        int mn = min(n, m);
        int mx = max(m, n);

        int lmax = mn * (mn + 1) + (mx - mn) * mn;

        if (L > lmax)
        {
            continue;
        }

        cout << n << " " << m << endl;
        return;
    }

    cout << -1 << endl;
    return;
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