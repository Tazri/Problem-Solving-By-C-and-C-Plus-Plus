// link : https://codeforces.com/problemset/problem/1771/B
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

    int n, m;
    cin >> n >> m;
    vector<vector<int>> v(n + 1);

    for (int i = 0; i < m; i++)
    {
        int from, to;
        cin >> from >> to;
        v[from].push_back(to);
        v[to].push_back(from);
    }

    multiset<int> mt;
    int l = 1, r = 1;
    int ans = 0;
    while (r <= n)
    {
        if (!mt.count(r))
        {
            for (int to : v[r])
                mt.insert(to);
            r++;
            continue;
        }

        int R = r - 1;

        while (mt.count(r))
        {
            int len = R - l + 1;
            ans += len;
            for (int to : v[l])
            {
                mt.erase(mt.find(to));
            }
            l++;
        }

        for (int to : v[r])
            mt.insert(to);
        r++;
    }

    while (l <= n)
    {
        ans += (n - l + 1);
        l++;
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