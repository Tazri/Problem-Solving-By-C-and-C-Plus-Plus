// link : https://codeforces.com/problemset/problem/1486/D
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

bool check(vector<int> &v, int k, int x)
{
    int n = v.size() - 1;
    vector<int> pre(n + 1);

    for (int i = 1; i <= n; i++)
    {
        if (v[i] >= x)
            pre[i] = +1;
        else
            pre[i] = -1;
    }

    for (int i = 1; i <= n; i++)
        pre[i] += pre[i - 1];

    int mn;
    for (int bi = 0, i = k; i <= n; i++, bi++)
    {
        if (bi == 0)
            mn = pre[bi];
        mn = min(pre[bi], mn);

        int rs = pre[i] - mn;

        if (rs > 0)
            return true;
    }

    return false;
}

void _DIBBA(int _DIBBA_NO)
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n + 1);

    for (int i = 1; i <= n; i++)
        cin >> v[i];

    int l = 1;
    int r = n;
    int ans;
    while (l <= r)
    {
        int mid = l + (r - l) / 2;

        if (check(v, k, mid))
        {
            ans = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }

    cout << ans << endl;
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