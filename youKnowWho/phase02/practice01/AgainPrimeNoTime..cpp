#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

int N = 1e4;
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

int legendre(int n, int p)
{
    int cnt = 0;

    while (n)
    {
        cnt += (n / p);
        n /= p;
    }

    return cnt;
}

void _DIBBA(int _DIBBA_NO)
{
    cout << "Case " << _DIBBA_NO << ":" << endl;
    int m, n;
    cin >> m >> n;
    int cpy_m = m;
    vector<int> v;

    int mn = -1;
    while (m > 1)
    {
        int p = spf[m];
        int time = 0;
        while (m % p == 0)
        {
            time++;
            m /= p;
        }

        int l = legendre(n, p);
        int should = l / time;

        if (mn == -1)
            mn = should;
        mn = min(should, mn);
    }

    if (mn == 0)
        cout << "Impossible to divide" << endl;
    else
        cout << mn << endl;
}

int32_t main()
{
    _GORIBER_TURBO_MODE_ON();
    build_spf(N, spf);
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++)
        _DIBBA(i);
    return 0;
}