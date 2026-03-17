// link : https://codeforces.com/problemset/problem/873/B
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
    string s;
    cin >> s;

    vector<int> v(n + 1);
    vector<int> pre(n + 1);

    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
            v[i + 1] = -1;
        else
            v[i + 1] = 1;
    }

    for (int i = 1; i <= n; i++)
    {
        pre[i] = v[i];
        pre[i] += pre[i - 1];
    }

    // for (int i = 1; i <= n; i++)
    //     cout << v[i] << " \n"[i == n];

    // for (int i = 1; i <= n; i++)
    //     cout << pre[i] << " \n"[i == n];

    map<int, int> mp;
    mp[0] = 0;
    int mx = -1;
    for (int r = 1; r <= n; r++)
    {
        if (mp.count(pre[r]))
        {
            int lm1 = mp[pre[r]];

            int len = r - lm1;
            if (mx == -1)
                mx = len;
            mx = max(mx, len);
            continue;
        }

        mp[pre[r]] = r;
    }

    cout << max(mx, 0) << endl;
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