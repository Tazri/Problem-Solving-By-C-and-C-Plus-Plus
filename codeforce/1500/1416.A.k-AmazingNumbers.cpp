// link : https://codeforces.com/problemset/problem/1416/A
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
    for (int i = 0; i < n; i++)
        cin >> v[i];

    map<int, int> mp;
    map<int, int> mx;

    for (int i = 0; i < n; i++)
    {
        int li = n - 1;
        if (mp.count(v[i]))
        {
            int prevMxLen = mx[v[i]];
            int pi = mp[v[i]];
            int mxLen = max({prevMxLen, i - pi});
            mp[v[i]] = i;
            mx[v[i]] = mxLen;
            continue;
        }

        int mxLen = i + 1;
        mx[v[i]] = mxLen;
        mp[v[i]] = i;
    }
    set<int> st;
    for (int i = n - 1; i >= 0; i--)
    {
        int li = n - 1;
        if (st.count(v[i]))
            continue;

        int len = li - i + 1;
        int prv = mx[v[i]];
        mx[v[i]] = max(prv, len);
        st.insert(v[i]);
    }

    vector<int> ans(n + 1, -1);

    for (pair<int, int> p : mx)
    {
        int w = p.second;

        if (ans[w] == -1)
            ans[w] = p.first;

        ans[w] = min(ans[w], p.first);
    }

    for (int i = 2; i <= n; i++)
    {
        if (ans[i] == -1)
        {
            ans[i] = ans[i - 1];
        }
        else if (ans[i - 1] != -1)
        {
            ans[i] = min(ans[i], ans[i - 1]);
        }
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