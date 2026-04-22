// link : https://codeforces.com/problemset/problem/1555/C
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
    int n;
    cin >> n;
    vector<int> up(n + 1);
    vector<int> down(n + 1);

    for (int i = 1; i <= n; i++)
        cin >> up[i];

    for (int i = 1; i <= n; i++)
        cin >> down[i];

    for (int i = 1; i <= n; i++)
    {
        up[i] += up[i - 1];
        down[i] += down[i - 1];
    }

    int ans = up.back();
    for (int i = 1; i <= n; i++)
    {
        int u = up.back() - up[i];
        int d = down[i - 1];

        int mx = max(u, d);

        if (i == 0)
            ans = mx;
        ans = min(ans, mx);
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