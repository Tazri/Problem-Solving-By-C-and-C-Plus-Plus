// link : https://codeforces.com/problemset/problem/2120/C
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
    int n, M;
    cin >> n >> M;

    vector<int> v(n + 1);

    int m = M;
    int prev = n;

    for (int i = n, li = n - 1, vi = 1; i >= 1; i--, li--, vi++)
    {
        int l = 1;
        int r = min(prev, i);

        int ans = -1;
        while (l <= r)
        {
            int mid = l + (r - l) / 2;

            if (m - mid >= li)
            {
                ans = mid;
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }

        if (ans == -1)
        {
            cout << -1 << endl;
            return;
        }
        m -= ans;
        v[vi] = ans;
    }

    if (m > 0)
    {
        cout << -1 << endl;
        return;
    }

    vector<bool> mark(n + 1, false);
    vector<bool> imark(n + 1, false);
    for (int i = 1; i <= n; i++)
    {
        if (v[i] != v[i - 1])
        {
            mark[v[i]] = true;
            imark[i] = true;
        }
    }

    vector<int> left;
    left.reserve(n);

    for (int i = 1; i <= n; i++)
    {
        if (!mark[i])
            left.push_back(i);
    }

    reverse(left.begin(), left.end());

    for (int i = n; i >= 1; i--)
    {
        if (imark[i])
            continue;

        v[i] = left.back();
        left.pop_back();
    }

    cout << v[1] << endl;

    for (int i = 2; i <= n; i++)
    {
        cout << v[i - 1] << " " << v[i] << endl;
    }
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