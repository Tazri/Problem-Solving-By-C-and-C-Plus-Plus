// link : https://codeforces.com/contest/1850/problem/F
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
    int n;
    cin >> n;
    vector<int> v;
    v.reserve(n);
    vector<int> mp(n + 1);

    for (int i = 1; i <= n; i++)
    {
        int ai;
        cin >> ai;

        if (ai <= n && ai >= 1 && mp[ai] == 0)
            v.push_back(ai);

        if (ai <= n && ai >= 1)
            mp[ai]++;
    }

    sort(v.begin(), v.end());

    vector<int> cnt(n + 1, 0);

    for (int vi : v)
    {
        int k = mp[vi];

        for (int j = vi; j <= n; j += vi)
        {
            cnt[j] += k;
        }
    }

    int mx;

    for (int i = 1; i <= n; i++)
    {
        if (i == 1)
            mx = cnt[i];
        mx = max(mx, cnt[i]);
    }

    cout << mx << endl;
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