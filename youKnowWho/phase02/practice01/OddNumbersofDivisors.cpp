// link : https://www.spoj.com/problems/ODDDIV/en/
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
#define N 1e5

vector<int> spf;
vector<vector<int>> v(1e4 + 123);

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

void precal()
{
    build_spf(N, spf);

    for (int i = 1; i <= N; i++)
    {
        int n = i;
        int cnt = 1;

        while (n > 1)
        {
            int p = spf[n];
            int ex = 0;
            while (n % p == 0)
            {
                n /= p;
                ex++;
            }

            ex *= 2;
            cnt *= (ex + 1);
        }

        v[cnt].push_back(i * i);
    }
}

void _DIBBA(int _DIBBA_NO)
{
    int k, l, r;
    cin >> k >> l >> r;
    int cnt = upper_bound(v[k].begin(), v[k].end(), r) - lower_bound(v[k].begin(), v[k].end(), l);

    cout << cnt << endl;
}

int32_t main()
{
    _GORIBER_TURBO_MODE_ON();
    precal();
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++)
        _DIBBA(i);
    return 0;
}