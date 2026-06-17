// link : https://codeforces.com/contest/2234/problem/C
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

int solve(int strt, int mx, vector<int> &v)
{
    int ans = 0;
    int n = v.size();

    int mxi = 0;
    for (int i = 0; i < n; i++)
    {
        int j = (strt + i) % n;

        if (v[j] == mx)
        {
            mxi = j;
            break;
        }
    }

    int tm = 0;
    int prev = 0;
    for (int k = (strt + n - 1) % n; k != mxi; k = (k + n - 1) % n)
    {
        if (prev == 0)
            prev = v[k];
        prev = max(prev, v[k]);

        ans += prev;
    }

    prev = 0;
    int tr = ((mxi + 1) % n);
    for (int k = (strt + 1) % n; k != ((mxi + 1) % n) && mxi != strt; k = (k + 1) % n)
    {
        int p = v[(k + n - 1) % n];

        if (prev == 0)
            prev = p;

        prev = max(prev, p);
        ans += prev;
    }
    return ans;
}

void _DIBBA(int _DIBBA_NO)
{
    int n;
    cin >> n;
    vector<int> v(n);

    int mx;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (i == 0)
            mx = v[i];

        mx = max(mx, v[i]);
    }

    for (int i = 0; i < n; i++)
        cout << solve(i, mx, v) << " \n"[i == n - 1];
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