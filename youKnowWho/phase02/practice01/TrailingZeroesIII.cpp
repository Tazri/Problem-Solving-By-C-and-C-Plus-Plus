// link : https://lightoj.com/problem/trailing-zeroes-iii
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

void _DIBBA(int _DIBBA_NO)
{
    cout << "Case " << _DIBBA_NO << ": ";
    int q;
    cin >> q;

    int l = 1;
    int r = 1e18;
    int nm = -1;
    while (l <= r)
    {
        int mid = l + (r - l) / 2;

        int cnt = legendre(mid, (ll)5);
        if (q <= cnt)
        {
            nm = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }

    if (nm == -1)
    {
        cout << "impossible" << endl;
        return;
    }

    int cnt = legendre(nm, (ll)5);

    if (cnt != q)
    {
        cout << "impossible" << endl;
        return;
    }

    cout << nm << endl;
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