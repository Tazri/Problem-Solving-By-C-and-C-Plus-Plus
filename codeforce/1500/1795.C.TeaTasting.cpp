// link : https://codeforces.com/problemset/problem/1795/C
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
    int n;
    cin >> n;
    vector<int> a(n + 2, 0);
    vector<int> b(n + 2, 0);

    for (int i = 1; i <= n; i++)
        cin >> a[i];

    for (int i = 1; i <= n; i++)
        cin >> b[i];

    vector<int> pre(n + 2, 0);
    for (int i = 1; i <= n; i++)
    {
        pre[i] = b[i];
        pre[i] += pre[i - 1];
    }

    vector<int> ans(n + 2, 0);
    vector<int> extra(n + 2, 0);
    vector<int> times(n + 2, 0);

    for (int i = 1; i <= n; i++)
    {
        int l = i;
        int r = n;
        int fi = -1;
        while (l <= r)
        {
            int mid = l + (r - l) / 2;

            int sum = pre[mid] - pre[i - 1];
            if (a[i] <= sum)
            {
                fi = mid;
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }

        if (fi == -1)
        {
            times[i] += 1;
            times[n + 1] -= 1;
            continue;
        }

        if (fi == 1)
        {
            extra[i] += min(b[i], a[i]);
            continue;
        }

        int left = i;
        int right = fi - 1;
        times[left] += 1;
        times[right + 1] -= 1;

        extra[fi] += (a[i] - (pre[right] - pre[left - 1]));
    }

    for (int i = 1; i <= n; i++)
        times[i] += times[i - 1];

    for (int i = 1; i <= n; i++)
    {
        ans[i] += (b[i] * times[i]);
        ans[i] += extra[i];
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