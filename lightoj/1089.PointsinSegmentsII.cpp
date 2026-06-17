// link : https://lightoj.com/problem/points-in-segments-ii
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
    cout << "Case " << _DIBBA_NO << ":" << endl;
    int n, q;
    cin >> n >> q;
    vector<pair<int, int>> seg(n);

    for (int i = 0; i < n; i++)
    {
        cin >> seg[i].first >> seg[i].second;
    }

    vector<int> query(q);
    vector<int> v;
    set<int> st;

    for (int i = 0; i < q; i++)
    {
        cin >> query[i];

        if (st.count(query[i]))
            continue;
        v.push_back(query[i]);
        st.insert(query[i]);
    }

    int sz = v.size();
    vector<int> pre(sz + 1, 0);
    sort(v.begin(), v.end());

    map<int, int> mp;

    for (int i = 0; i < sz; i++)
    {
        mp[v[i]] = i;
    }

    for (pair<int, int> sg : seg)
    {
        int l = sg.first;
        int r = sg.second;

        vector<int>::iterator lwr = lower_bound(v.begin(), v.end(), l);

        if (lwr == v.end())
            continue;

        int lwrV = *lwr;

        if (lwrV > r)
            continue;
        vector<int>::iterator upper = upper_bound(v.begin(), v.end(), r);

        upper--;
        int upperV = *upper;

        int li = mp[lwrV];
        int ri = mp[upperV];

        pre[li]++;
        pre[ri + 1]--;
    }

    for (int i = 1; i < sz; i++)
        pre[i] += pre[i - 1];

    map<int, int> ansMp;
    for (int i = 0; i < sz; i++)
    {
        ansMp[v[i]] = pre[i];
    }

    for (int i = 0; i < q; i++)
    {
        cout << ansMp[query[i]] << endl;
    }
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