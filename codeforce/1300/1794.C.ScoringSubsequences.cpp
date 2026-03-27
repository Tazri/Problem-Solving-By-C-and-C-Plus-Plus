// link : https://codeforces.com/problemset/problem/1794/C
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
    vector<int> v(n + 1);

    for (int i = 1; i <= n; i++)
        cin >> v[i];

    vector<int> ans(n + 1);

    int f = 1;
    for (int i = 1; i <= n; i++)
    {
        int l = 1;
        int r = i;
        int mx = 1;
        while (l <= r)
        {
            int mid = l + (r - l) / 2;
            int f = i - mid + 1;

            if (v[mid] >= f)
            {
                mx = max(f, mx);
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }

        ans[i] = mx;
    }

    for (int i = 1; i <= n; i++)
        cout << ans[i] << " \n"[i == n];
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