// link : https://www.codechef.com/problems/SUMPRODSEG
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
    int x, y;
    cin >> x >> y;

    for (int i = 1; i * i <= y; i++)
    {
        if (y % i != 0LL)
            continue;

        int l = i;
        int r = y / i;

        if (x < l)
        {
            cout << l << " " << r << endl;
            cout << 0 << " " << x << endl;
            return;
        }

        int up = x / 2;
        if (r < x && r < up)
        {
            cout << l << " " << r << endl;
            cout << up << " " << x - up << endl;
            return;
        }

        int d = x - l + 1;
        int li = d;
        int ri = x - d;

        if (ri < li)
            continue;

        if ((l <= li && li <= ri) || (l <= ri && ri <= r))
        {
            continue;
        }

        cout << l << " " << r << endl;
        cout << li << " " << ri << endl;
        return;
    }

    cout << -1 << endl;
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