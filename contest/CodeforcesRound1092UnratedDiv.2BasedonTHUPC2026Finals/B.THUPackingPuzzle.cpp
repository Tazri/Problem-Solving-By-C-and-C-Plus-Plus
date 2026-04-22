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

int f1(int t, int h, int u)
{
    int ans = 0;
    int mn = min(t, u);
    ans += (mn * 4);
    t -= mn;
    u -= mn;

    if (u > 0)
    {
        ans += (u * 3);
        u -= u;
    }

    if (t > 0)
    {
        mn = min(t / 2, h);

        ans += (mn * 7);
        h -= mn;
        t -= (mn * 2);
    }

    if (h >= 1 && t == 1)
    {
        ans += 5;
        t--;
        h--;
    }

    if (t > 0)
    {
        ans += 3;
        ans += (t - 1) * 2;
        t = 0;
    }

    if (h > 0)
    {
        ans += (h * 3);
    }

    return ans;
}

int f2(int t, int h, int u)
{
}

void _DIBBA(int _DIBBA_NO)
{
    int t, h, u;
    cin >> t >> h >> u;

    cout << f1(t, h, u) << endl;
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