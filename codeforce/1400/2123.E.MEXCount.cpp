// link : https://codeforces.com/problemset/problem/2123/E
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
    vector<int> mex(n + 1);

    for (int i = 0; i < n; i++)
    {
        int vi;
        cin >> vi;
        mex[vi]++;
    }

    vector<int> v;

    bool flag = false;
    int cnt = 0;
    for (int i = 0; i <= n; i++)
    {
        if (flag)
        {
            cnt += mex[i];
            continue;
        }

        if (mex[i])
        {
            v.push_back(mex[i]);
            continue;
        }

        flag = true;
    }

    sort(v.begin(), v.end());

    vector<int> ans(n + 1);
    for (int k = 0; k <= n; k++)
    {
        int black = n - v.size();

        if (black >= k)
        {
            int ai = 1;
            int ex = upper_bound(v.begin(), v.end(), k) - v.begin();
            ai += ex;
            ans[k] = ai;
            continue;
        }

        ans[k] = n - k + 1;
    }

    for (int i = 0; i <= n; i++)
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