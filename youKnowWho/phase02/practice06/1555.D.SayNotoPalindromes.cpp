// link : https://codeforces.com/problemset/problem/1555/D
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

vector<string> pattern = {"abc", "acb", "bac", "bca", "cab", "cba"};

string makePattern(int n, const string &s)
{
    string p(n + 1, ' ');

    int si = 0;
    for (int i = 1; i <= n; i++)
    {
        p[i] = s[si];
        si++;
        si %= 3;
    }
    return p;
}

void _DIBBA(int _DIBBA_NO)
{
    int n, q;
    cin >> n >> q;
    string s;
    cin >> s;
    s = " " + s;
    vector<vector<int>> pre(6, vector<int>(n + 1, 0));

    for (int pi = 0; pi < 6; pi++)
    {
        string p = makePattern(n, pattern[pi]);
        for (int i = 1; i <= n; i++)
        {
            if (p[i] != s[i])
                pre[pi][i] = 1;

            pre[pi][i] += pre[pi][i - 1];
        }
    }

    for (int qi = 1; qi <= q; qi++)
    {
        int mn = -1;
        int l, r;
        cin >> l >> r;
        for (int pi = 0; pi < 6; pi++)
        {
            int take = pre[pi][r] - pre[pi][l - 1];

            if (pi == 0)
                mn = take;
            mn = min(take, mn);
        }

        cout << mn << endl;
    }
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