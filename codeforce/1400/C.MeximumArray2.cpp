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
    int n, k, q;
    cin >> n >> k >> q;

    vector<int> ans(n + 1);
    vector<bool> mnMark(n + 1, false);
    vector<pair<int, int>> rangeMn;
    vector<pair<int, int>> rangex;

    while (q--)
    {
        int type, l, r;
        cin >> type >> l >> r;

        if (type == 1)
            rangeMn.push_back({l, r});
        else
            rangex.push_back({l, r});
    }

    vector<bool> markMn(n + 1, false);
    vector<bool> markX(n + 1, false);
    vector<bool> markCommon(n + 1, false);

    for (pair<int, int> p : rangeMn)
        for (int i = p.first; i <= p.second; i++)
            markMn[i] = true;

    for (pair<int, int> p : rangex)
        for (int i = p.first; i <= p.second; i++)
            markX[i] = true;

    for (int i = 1; i <= n; i++)
        if (markMn[i] && markX[i])
            markCommon[i] = true;

    // for (int i = 1; i <= n; i++)
    //     cout << markMn[i] << " \n"[i == n];

    for (int i = 0; i < rangex.size(); i++)
    {
        int l = rangex[i].first;
        int r = rangex[i].second;

        while (markCommon[l])
            l++;

        while (markCommon[r])
            r--;

        rangex[i].first = l;
        rangex[i].second = r;
    }

    vector<bool> change(n + 1, false);

    for (pair<int, int> p : rangex)
    {
        int l = p.first;
        int r = p.second;
        vector<int> v;
        set<int> st;
        for (int i = l; i <= r; i++)
            if (change[i])
                st.insert(ans[i]);
            else
                v.push_back(i);

        vector<int> left;
        for (int i = 0; i < k; i++)
            if (!st.count(i))
                left.push_back(i);

        for (int vi : v)
        {
            if (left.size() <= 0)
                break;
            change[vi] = true;
            ans[vi] = left.back();
            left.pop_back();
        }
    }

    for (int i = 1; i <= n; i++)
    {
        if (markCommon[i])
            ans[i] = n + n;
        else if (markMn[i])
            ans[i] = k;
    }

    for (int i = 1; i <= n; i++)
        cout << ans[i] << " \n"[i == n];
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