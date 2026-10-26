// link : https://codeforces.com/contest/2257/problem/B
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

void _DIBBA(int _DIBBA_NO)
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    vector<int> b(m);

    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < m; i++)
        cin >> b[i];

    vector<int> va(n);
    vector<int> vb(m);
    for (int i = 0; i < n; i++)
        if (i == n - 1)
            va[i] = a[i];
        else
            va[i] = a[i] - a[i + 1] + 1;

    for (int i = 0; i < m; i++)
        if (i == m - 1)
            vb[i] = b[i];
        else
            vb[i] = b[i] - b[i + 1] + 1;

    int first = 0;
    int second = 0;
    for (int ai : va)
    {
        first += ai;
    }
    for (int bi : vb)
        second += bi;

    if (first >= second)
        cout << 1 << endl;
    else
        cout << 2 << endl;
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