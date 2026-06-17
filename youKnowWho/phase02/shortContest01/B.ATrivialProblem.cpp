// link : https://codeforces.com/problemset/problem/633/B
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

#define mx 1e18

int legendre(int n, int p)
{
    int cnt = 0;

    while (n)
    {
        cnt += (n / p);
        n /= p;
    }

    return cnt;
}

int cnt(int n)
{
    return legendre(n, 5LL);
}

void _DIBBA(int _DIBBA_NO)
{
    int t;
    cin >> t;

    int l = 1;
    int r = mx;
    int upper = 0;
    while (l <= r)
    {
        int mid = l + (r - l) / 2;

        int res = cnt(mid);

        if (res <= t)
        {
            upper = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }

    if (cnt(upper) != t)
    {
        cout << 0 << endl;
        return;
    }

    l = 1;
    r = mx;
    int lwr = 0;
    while (l <= r)
    {
        int mid = l + (r - l) / 2;

        int res = cnt(mid);

        if (res < t)
        {
            lwr = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }

    lwr++;

    cout << upper - lwr + 1 << endl;

    for (int i = lwr; i <= upper; i++)
        cout << i << " \n"[i == upper];
}

int32_t main()
{
    _GORIBER_TURBO_MODE_ON();

    int t = 1;
    // cin >> t;
    for (int i = 1; i <= t; i++)
        _DIBBA(i);
    return 0;
}