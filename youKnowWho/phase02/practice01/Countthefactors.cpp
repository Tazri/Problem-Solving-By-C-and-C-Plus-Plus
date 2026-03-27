#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

int N = 1000000;
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

void _DIBBA(int n)
{
    int cnt = 0;
    int cn = n;
    while (n > 1)
    {
        int p = spf[n];
        cnt++;
        while (n % p == 0)
        {
            n /= p;
        }
    }

    cout << cn << " : " << cnt << endl;
}

int32_t main()
{
    _GORIBER_TURBO_MODE_ON();
    build_spf(N, spf);
    int n;

    while (1)
    {
        cin >> n;
        if (n == 0)
            break;

        _DIBBA(n);
    }

    return 0;
}