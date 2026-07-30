#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

struct DS
{
    int mex = 0;
    set<int> st;

    void insert(int d)
    {
        if (mex != d)
        {
            st.insert(d);
            return;
        }

        st.insert(mex);

        while (st.count(mex))
        {
            mex++;
        }
    }
};

int getMex(vector<int> &v, int l, int r)
{
    int n = v.size();
    DS ds;

    while (l >= 0 && r < n && v[l] == v[r])
    {
        ds.insert(v[l]);
        ds.insert(v[r]);
        l--;
        r++;
    }

    return ds.mex;
}

void _DIBBA(int _DIBBA_NO)
{
    int n;
    cin >> n;
    vector<int> v(2 * n);
    for (int i = 0; i < 2 * n; i++)
        cin >> v[i];

    int mex = 1;
    for (int i = 0; i < v.size(); i++)
    {
        int t1 = getMex(v, i, i);
        int t2 = getMex(v, i, i + 1);
        int t3 = getMex(v, i - 1, i);

        mex = max({t1, t2, t3, mex});
    }

    cout << mex << endl;
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