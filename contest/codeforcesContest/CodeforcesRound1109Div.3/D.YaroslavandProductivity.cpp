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
    int n, m;
    cin >> n >> m;
    vector<int> v(n + 1);
    vector<int> v1(n + 1);
    vector<int> v2(n + 1);
    for (int i = 1; i <= n; i++)
    {
        int vi;
        cin >> vi;
        v[i] = vi;
        if (vi <= 0)
            v1[i] = vi * -1;
        else
            v2[i] = vi;
    }

    for (int i = 1; i <= n; i++)
    {
        v1[i] += v1[i - 1];
        v2[i] += v2[i - 1];
    }

    vector<int> q(m);
    for (int i = 0; i < m; i++)
        cin >> q[i];

    sort(q.begin(), q.end());
    int prev = 0;

    int ans = 0;
    for (int qi : q)
    {
        int l = prev + 1;
        int r = qi;
        int sum1 = v1[r] - v1[l - 1];
        int sum2 = v2[r] - v2[l - 1];

        int mn = min(sum1, sum2);
        int mx = max(sum1, sum2);
        ans += mx;
        ans -= mn;
        prev = qi;
    }

    for (int i = prev + 1; i <= n; i++)
        ans += v[i];

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