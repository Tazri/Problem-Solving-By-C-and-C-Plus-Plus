// link : https://codeforces.com/problemset/problem/1661/B
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

int mod = 32768;

int take(int n)
{
    n %= mod;
    int times = 0;
    while (n)
    {
        n *= 2;
        n %= mod;
        times++;
    }

    return times;
}

void _DIBBA(int _DIBBA_NO)
{
    int n;
    cin >> n;
    vector<int> ans(n);

    for (int i = 0; i < n; i++)
    {
        int vi;
        cin >> vi;
        ans[i] = take(vi);
        int prev = 0;
        for (int j = 0; j <= 15; j++)
        {
            int mask = (1 << j);
            if (vi & mask)
            {
                prev += mask;
                continue;
            }
            int diff = mask - prev;
            int take = diff + abs(15 - j);
            ans[i] = min(take, ans[i]);
        }
    }

    for (int i = 0; i < n; i++)
        cout << ans[i] << " \n"[i == n - 1];
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