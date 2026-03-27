// link : https://codeforces.com/problemset/problem/1931/D
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
    int n, x, y;
    cin >> n >> x >> y;

    vector<int> v(n);
    map<int, vector<int>> group;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];

        group[v[i] % y].push_back(v[i]);
    }

    ll ans = 0;

    for (pair<int, vector<int>> p : group)
    {
        vector<int> &arr = p.second;

        map<int, int> mp;
        ll cnt = 0;
        for (int j = 0; j < arr.size(); j++)
        {

            int ai = ((arr[j] * -1) % x + x) % x;

            if (mp.count(ai))
                cnt += (ll)mp[ai];
            mp[arr[j] % x]++;
        }

        ans += (ll)cnt;
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