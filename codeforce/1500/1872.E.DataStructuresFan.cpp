// link : https://codeforces.com/problemset/problem/1872/E
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
    vector<int> v(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> v[i];
    string s;
    cin >> s;
    s = " " + s;
    int one = 0;
    int zero = 0;
    int allXor = 0;
    for (int i = 1; i <= n; i++)
    {
        if (s[i] == '1')
            one ^= v[i];

        allXor ^= v[i];
    }

    vector<int> pre(n + 1, 0);

    for (int i = 1; i <= n; i++)
    {
        pre[i] = v[i];
        pre[i] ^= pre[i - 1];
    }

    int q;
    cin >> q;
    vector<int> query;
    for (int qi = 1; qi <= q; qi++)
    {
        int type;
        cin >> type;

        if (type == 1)
        {
            int l, r;
            cin >> l >> r;
            int xr = pre[r] ^ pre[l - 1];
            one ^= xr;
            ;
            continue;
        }

        int st;
        cin >> st;
        if (st == 1)
            query.push_back(one);
        else
            query.push_back(allXor ^ one);
    }

    for (int i = 0; i < query.size(); i++)
        cout << query[i] << " \n"[i == query.size() - 1];
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