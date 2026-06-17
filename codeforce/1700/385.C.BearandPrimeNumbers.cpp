// link: https://codeforces.com/problemset/problem/385/C
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

#define int ll

int N = (1e7) + 1234;
vector<int> spf;
void build_spf(int n, vector<int> &spf)
{
    spf.assign(n + 1, 0);
    for (int i = 2; i <= n; i++)
        spf[i] = i;

    for (int i = 4; i <= n; i += 2)
        spf[i] = 2;

    for (int i = 3; i * i <= n; i += 2)
    {
        if (spf[i] == i)
        {
            for (int j = i * i; j <= n; j += 2 * i)
            {
                if (spf[j] == j)
                    spf[j] = i;
            }
        }
    }
}

void _DIBBA(int _DIBBA_NO)
{
    build_spf(N, spf);

    int n;
    cin >> n;
    vector<int> v(n);

    int mx;
    for (int i = 0; i < n; i++)
    {
        int vi;
        cin >> vi;

        v[i] = vi;

        if (i == 0)
            mx = vi;
        mx = max(mx, vi);
    }

    vector<int> pre(mx + 1);

    for (int vi : v)
    {
        while (vi > 1)
        {
            int p = spf[vi];

            while (vi % p == 0)
                vi /= p;

            pre[p]++;
        }
    }

    for (int i = 1; i <= mx; i++)
        pre[i] += pre[i - 1];

    int q;
    cin >> q;

    while (q--)
    {
        int l, r;
        cin >> l >> r;

        if (l > mx)
        {
            cout << 0 << endl;
            continue;
        }

        r = min(r, mx);

        cout << pre[r] - pre[l - 1] << endl;
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