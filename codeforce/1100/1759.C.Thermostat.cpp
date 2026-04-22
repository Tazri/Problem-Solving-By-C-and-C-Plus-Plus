// link : https://codeforces.com/contest/1759/problem/C
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
    int l, r, x;
    cin >> l >> r >> x;
    int a, b;
    cin >> a >> b;

    int l1 = max(abs(l - a), abs(r - a));
    int l2 = max(abs(l - b), abs(r - b));

    if (a == b)
    {
        cout << 0 << endl;
        return;
    }

    if (l1 < x || l2 < x)
    {
        cout << -1 << endl;
        return;
    }

    if (abs(a - b) >= x)
    {
        cout << 1 << endl;
        return;
    }

    if ((abs(l - a) >= x && abs(l - b) >= x) || (abs(r - a) >= x && abs(r - b) >= x))
    {
        cout << 2 << endl;
        return;
    }

    cout << 3 << endl;
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