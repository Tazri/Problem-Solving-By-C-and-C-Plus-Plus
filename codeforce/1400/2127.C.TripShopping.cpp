// link : https://codeforces.com/problemset/problem/2127/C
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
    vector<pair<int, int>> v(n);

    for (int i = 0; i < n; i++)
        cin >> v[i].first;

    for (int i = 0; i < n; i++)
        cin >> v[i].second;

    sort(v.begin(), v.end(), [](pair<int, int> a, pair<int, int> b)
         {
        int as = a.first + a.second;
        int bs = b.first + b.second;
            return as < bs; });

    int sum = 0;

    for (int i = 0; i < n; i++)
        sum += abs(v[i].first - v[i].second);

    int ans;
    for (int i = 1; i < n; i++)
    {
        int s = sum;
        s -= abs(v[i].first - v[i].second);
        s -= abs(v[i - 1].first - v[i - 1].second);

        vector<int> d = {v[i - 1].first, v[i - 1].second, v[i].first, v[i].second};

        sort(d.begin(), d.end());

        s += (d[3] - d[0]);
        s += (d[2] - d[1]);

        if (i == 1)
            ans = s;

        ans = min(ans, s);
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