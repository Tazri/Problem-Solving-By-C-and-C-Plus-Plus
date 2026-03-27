#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

int N = 100;
vector<int> spf;

void build_spf(int n, vector<int> &spf)
{
    spf.assign(n + 1, 0);
    for (int i = 2; i <= n; i++)
        spf[i] = i;

    for (int i = 4; i <= n; i += 2)
        spf[i] = 2;

    for (int i = 3; i * i <= n; i += 2)
    {
        if (spf[i] == i)
        {
            for (int j = i * i; j <= n; j += 2 * i)
            {
                if (spf[j] == j)
                    spf[j] = i;
            }
        }
    }
}

void _DIBBA(int _DIBBA_NO)
{

    int n;
    cin >> n;

    cout << "Case " << _DIBBA_NO << ": " << n << " = ";

    vector<int> mp(101, 0);

    int cn = n;
    for (int i = 1; i <= n; i++)
    {
        int nums = i;
        while (nums > 1)
        {
            int p = spf[nums];

            while (nums % p == 0)
            {
                mp[p]++;
                nums /= p;
            }
        }
    }

    vector<pair<int, int>> ans;
    for (int i = 2; i <= n; i++)
    {
        if (mp[i] > 0)
            ans.push_back({i, mp[i]});
    }

    for (int i = 0; i < ans.size(); i++)
        cout << ans[i].first << " (" << ans[i].second << ")" << (i == ans.size() - 1 ? "\n" : " * ");
}

int32_t main()
{
    _GORIBER_TURBO_MODE_ON();
    build_spf(N, spf);
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++)
        _DIBBA(i);
    return 0;
}