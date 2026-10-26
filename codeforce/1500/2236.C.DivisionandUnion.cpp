// link : https://codeforces.com/problemset/problem/2236/D
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

struct Seg
{
    int l, r, index;
};

void _DIBBA(int _DIBBA_NO)
{
    int n;
    cin >> n;
    vector<Seg> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i].l >> v[i].r;
        v[i].index = i;
    }

    sort(v.begin(), v.end(), [](Seg a, Seg b)
         {
        if(a.l == b.l)return a.r < b.r;
            return a.l <  b.l; });

    vector<int> ans(n);
    int mxr = 0;
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            ans[v[i].index] = 1;
            mxr = v[i].r;
            continue;
        }

        if (v[i].l <= mxr)
        {
            ans[v[i].index] = 1;
            mxr = max(v[i].r, mxr);
            continue;
        }

        ans[v[i].index] = 2;
    }

    set<int> st;
    for (int ai : ans)
        st.insert(ai);

    if (st.size() <= 1)
    {
        cout << -1 << endl;
        return;
    }

    for (int i = 0; i < n; i++)
        cout << ans[i] << " \n"[i == n - 1];
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