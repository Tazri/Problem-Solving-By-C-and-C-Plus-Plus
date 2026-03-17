// link : https://codeforces.com/problemset/problem/580/B
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
    int n, d;
    cin >> n >> d;

    vector<pair<int, int>> v(n);

    for (int i = 0; i < n; i++)
        cin >> v[i].first >> v[i].second;

    sort(v.begin(), v.end());

    // for (int i = 0; i < n; i++)
    //     cout << v[i].first << " \n"[i == n - 1];

    // for (int i = 0; i < n; i++)
    //     cout << v[i].second << " \n"[i == n - 1];

    int mx = v[0].second;

    // cout << mx << endl;
    int sum = v[0].second;
    int l = 0;
    int r = 1;

    while (r < n)
    {
        int diff = v[r].first - v[l].first;
        if (diff < d)
        {
            sum += v[r].second;
            mx = max(sum, mx);
            r++;
            continue;
        }

        mx = max(mx, sum);
        sum += v[r].second;

        while (v[r].first - v[l].first >= d)
        {
            sum -= v[l].second;
            l++;
        }

        mx = max(mx, sum);
        r++;
    }

    cout << mx << endl;
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