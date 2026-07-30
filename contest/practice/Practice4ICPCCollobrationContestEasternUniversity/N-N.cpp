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
    n = 2 * n;

    vector<pair<int, int>> v(n);

    for (int i = 0; i < n; i++)
    {
        int ai, bi;
        cin >> ai >> bi;
        v[i].first = min(ai, bi);
        v[i].second = max(ai, bi);
    }

    sort(v.rbegin(), v.rend(), [](pair<int, int> a, pair<int, int> b)
         { return a.second < b.second; });

    // for (int i = 0; i < n; i++)
    //     cout << v[i].first << " \n"[i == n - 1];

    // for (int i = 0; i < n; i++)
    //     cout << v[i].second << " \n"[i == n - 1];

    multiset<pair<int, int>> top;
    multiset<pair<int, int>> bottom;
    for (int i = 0; i < n; i++)
    {
        top.insert({v[i].first, i});
        bottom.insert({v[i].second, i});
    }

    vector<bool> taken(n, false);
    int ans = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (taken[i])
            continue;

        // remove korte hobe
        top.erase({v[i].first, i});
        bottom.erase({v[i].second, i});
        taken[i] = true;
        pair<int, int> tb = *top.begin();
        pair<int, int> tr = *top.rbegin();
        pair<int, int> bb = *bottom.begin();
        pair<int, int> br = *bottom.rbegin();
        vector<pair<int, int>> selct;
        vector<pair<int, int>> cand = {tb, tr, bb, br};
        vector<int> vl = {v[i].first, v[i].second};

        for (int vi : vl)
        {
            for (pair<int, int> p : cand)
            {
                int d = abs(p.first - vi);
                selct.push_back({d, p.second});
            }
        }

        int id;

        sort(selct.rbegin(), selct.rend());

        ans += selct[0].first;
        id = selct[0].second;

        taken[id] = true;
        top.erase({v[id].first, id});
        bottom.erase({v[id].second, id});
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