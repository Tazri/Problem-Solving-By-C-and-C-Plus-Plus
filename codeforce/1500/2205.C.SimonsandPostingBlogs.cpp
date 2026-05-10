// link : https://codeforces.com/contest/2205/problem/C
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

vector<int> compress(vector<int> &v)
{
    int n;
    n = v.size();

    vector<int> ans;
    set<int> st;

    for (int i = n - 1; i >= 0; i--)
    {
        if (st.count(v[i]))
            continue;

        ans.push_back(v[i]);
        st.insert(v[i]);
    }

    return ans;
}

vector<int> compress(vector<int> &v, set<int> &erased)
{
    vector<int> ans;
    for (int vi : v)
    {
        if (erased.count(vi))
            continue;
        ans.push_back(vi);
    }
    return ans;
}

void _DIBBA(int _DIBBA_NO)
{
    int n;
    cin >> n;
    vector<vector<int>> blgs(n);

    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        blgs[i] = vector<int>(k);

        for (int j = 0; j < k; j++)
            cin >> blgs[i][j];

        blgs[i] = compress(blgs[i]);
    }

    vector<int> ans;
    set<int> erased;
    vector<int> ids(n);
    for (int i = 0; i < n; i++)
        ids[i] = i;

    while (ids.size() > 0)
    {
        int select = ids[0];

        for (int i : ids)
        {
            if (blgs[i] < blgs[select])
                select = i;
        }

        for (int ai : blgs[select])
        {
            ans.push_back(ai);
            erased.insert(ai);
        }

        vector<int> filter;

        for (int i : ids)
        {
            blgs[i] = compress(blgs[i], erased);

            if (blgs[i].size() > 0)
                filter.push_back(i);
        }

        ids = filter;
    }

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " \n"[i == ans.size() - 1];
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