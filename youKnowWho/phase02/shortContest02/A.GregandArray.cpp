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
    int n, m, q;
    cin >> n >> m >> q;
    vector<int> v(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> v[i];

    vector<int> pre(n + 2, 0);
    vector<vector<int>> ops(m + 1);

    for (int i = 1; i <= m; i++)
    {
        int l, r, d;
        cin >> l >> r >> d;
        ops[i] = {l, r, d};
    }

    vector<int> opv(m + 2, 0);

    for (int i = 0; i < q; i++)
    {
        int l, r;
        cin >> l >> r;
        opv[l]++;
        opv[r + 1]--;
    }

    for (int i = 1; i <= m; i++)
        opv[i] += opv[i - 1];

    for (int i = 1; i <= m; i++)
    {
        int l = ops[i][0];
        int r = ops[i][1];
        int d = ops[i][2];
        int x = d * opv[i];
        pre[l] += x;
        pre[r + 1] -= x;
    }

    for (int i = 1; i <= n; i++)
        pre[i] += pre[i - 1];

    for (int i = 1; i <= n; i++)
        v[i] = v[i] + pre[i];

    for (int i = 1; i <= n; i++)
        cout << v[i] << " \n"[i == n];
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