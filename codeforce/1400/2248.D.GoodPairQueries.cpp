// link : https://codeforces.com/contest/2248/problem/D
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
    int n, q;
    cin >> n >> q;
    vector<int> oneZero(n + 1, 0);
    vector<int> zeroOne(n + 1, 0);
    string s, t;
    cin >> s;
    cin >> t;
    s = " " + s;
    t = " " + t;

    for (int i = 1; i <= n; i++)
    {
        if (s[i] == t[i])
            continue;

        if (s[i] == '1')
            oneZero[i] = 1;
        else
            zeroOne[i] = 1;
    }

    for (int i = 1; i <= n; i++)
    {
        oneZero[i] += oneZero[i - 1];
        zeroOne[i] += zeroOne[i - 1];
    }

    for (int qi = 1; qi <= q; qi++)
    {
        int l, r;
        cin >> l >> r;

        int cnt1 = oneZero[r] - oneZero[l - 1];
        int cnt2 = zeroOne[r] - zeroOne[l - 1];
        int d = abs(cnt1 - cnt2);
        int eq = (r - l + 1) - (cnt1 + cnt2);

        if (eq >= d)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
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