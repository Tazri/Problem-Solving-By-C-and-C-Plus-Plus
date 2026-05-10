// link : https://codeforces.com/problemset/problem/1374/D
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
    int n, k;
    cin >> n >> k;

    multiset<int> mt;

    for (int i = 0; i < n; i++)
    {
        int vi;
        cin >> vi;

        if (vi % k == 0)
            continue;

        vi %= k;
        vi = k - vi;
        if (vi)
            mt.insert(vi);
    }

    int x = 0;
    int ans = 0;
    while (mt.size() > 0)
    {
        multiset<int>::iterator lw = mt.lower_bound(x);

        if (lw == mt.end())
        {
            ans += k - x;
            x = 0;
            continue;
        }

        int vi = *lw;
        ans += (vi - x);
        ans += 1;
        x = vi + 1;
        mt.erase(lw);
    }

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