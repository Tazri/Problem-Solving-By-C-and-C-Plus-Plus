// link : https://codeforces.com/problemset/problem/466/C
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
    vector<int> v(n + 2);
    vector<int> pre(n + 2, 0);
    vector<int> suff(n + 2, 0);

    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];

        pre[i] = v[i];
        pre[i] += pre[i - 1];
        suff[i] = v[i];
    }

    for (int i = n; i >= 0; i--)
        suff[i] += suff[i + 1];

    int ans = 0;
    map<int, int> mp;
    mp[pre[1]]++;
    for (int i = 3; i <= n; i++)
    {
        int k = suff[i];
        int prer = pre[i - 1];

        if (prer % 2 == 0)
        {
            int h = prer / 2;
            if (h == k)
                ans += mp[h];
        }

        mp[pre[i - 1]]++;
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