#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

bool isValid(vector<int> &v, int sz)
{
    int n = v.size();
    map<int, int> mp;
    vector<set<int>> cnt(sz + 1);
    for (int i = 0; i < n; i++)
    {
        if (mp.count(v[i]))
        {
            cnt[v[i]].insert(i - mp[v[i]]);
            mp[v[i]] = i;
            continue;
        }
        mp[v[i]] = i;
    }

    for (int i = 1; i <= sz; i++)
    {
        if (cnt[i].size() < 3)
            return false;
    }

    return true;
}

void _DIBBA(int _DIBBA_NO)
{
    int n;
    cin >> n;

    for (int tm = 0; tm < 2; tm++)
    {
        for (int i = 1; i <= n; i++)
            cout << i << " ";
    }

    cout << n;

    for (int i = 1; i < n; i++)
        cout << " " << i << " " << i;
    cout << " " << n << endl;
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