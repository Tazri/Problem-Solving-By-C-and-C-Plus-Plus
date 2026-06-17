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
    vector<int> v(n);

    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        mp[v[i]]++;
    }

    int ans = -1;

    for (pair<int, int> p : mp)
    {
        int m = p.first;

        int less = 0;
        int greater = 0;
        int eq = 0;

        for (int i = 0; i < n; i++)
            if (v[i] < m)
                less++;
            else if (v[i] > m)
                greater++;
            else
                eq++;

        int d = abs(greater - less);

        int take = min(less, greater) + d;

        if (ans == -1)
            ans = take;
        ans = min(ans, take);
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