// link : https://codeforces.com/problemset/problem/1486/B
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

int fcnt(vector<int> &v)
{
    int n = v.size();
    vector<int> pre(n);
    pre[0] = v[0];
    for (int i = 1; i < n; i++)
    {
        pre[i] = v[i];
        pre[i] += pre[i - 1];
    }

    vector<int> vx(n);
    int mn;
    for (int i = 0; i < n; i++)
    {
        int cnt = i + 1;

        int sum = ((cnt * v[i]) - pre[i]) + ((pre.back() - pre[i]) - (v[i] * (n - (i + 1))));

        vx[i] = sum;
        if (i == 0)
            mn = sum;
        mn = min(sum, mn);
    }

    set<int> st;
    for (int i = 0; i < n; i++)
    {
        if (vx[i] == mn)
            st.insert(v[i]);
    }

    vector<int> slt;
    for (int si : st)
        slt.push_back(si);

    if (slt.size() == 1)
        return 1;

    int l = slt[0];
    int r = slt[1];
    return (r - l) + 1;
}

void _DIBBA(int _DIBBA_NO)
{
    int n;
    cin >> n;
    vector<int> vx(n);
    vector<int> vy(n);

    for (int i = 0; i < n; i++)
    {
        cin >> vx[i] >> vy[i];
    }

    sort(vx.begin(), vx.end());
    sort(vy.begin(), vy.end());

    cout << fcnt(vx) * fcnt(vy) << endl;
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