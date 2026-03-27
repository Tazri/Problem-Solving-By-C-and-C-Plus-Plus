#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

int N = 500000;
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
    int n;
    cin >> n;
    int ans = 1;
    int cn = n;
    while (n > 1)
    {
        int pw = 1;
        int p = spf[n];

        while (n % p == 0)
        {
            pw *= p;
            n /= p;
        }

        int sum = ((pw * p) - 1) / (p - 1);
        ans *= sum;
    }

    ans -= cn;
    cout << ans << endl;
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