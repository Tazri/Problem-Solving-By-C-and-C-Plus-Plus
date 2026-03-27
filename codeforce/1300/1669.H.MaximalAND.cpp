// link : https://codeforces.com/problemset/problem/1669/H
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
    int n, k;
    cin >> n >> k;

    vector<int> v(n);
    vector<int> cnt(31);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];

        for (int j = 0; j <= 30; j++)
        {
            if (v[i] & (1 << j))
                cnt[j]++;
        }
    }

    int ans = 0;

    for (int i = 30; i >= 0; i--)
    {
        if (cnt[i] == n)
        {
            ans += (1LL << i);
            continue;
        }

        int zero = n - cnt[i];

        if (zero > k)
            continue;

        k -= zero;

        ans += (1LL << i);
    }

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