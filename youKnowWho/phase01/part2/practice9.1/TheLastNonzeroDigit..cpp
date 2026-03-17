#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

int N = 20000000;
ll mod = 1000;
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

void precal()
{
    build_spf(N, spf);
}

void _DIBBA(int n, int m)
{
    int five = 0;
    int two = 0;
    ll ans = 1;

    for (int i = n - m + 1; i <= n; i++)
    {
        int pi = i;

        while (pi > 1)
        {
            int p = spf[pi];
            pi /= p;

            if (p == 2)
                two++;
            else if (p == 5)
                five++;
            else
                ans = ans * (ll)p % 100;
        }
    }

    int mn = min(five, two);
    five -= mn;
    two -= mn;

    for (int i = 0; i < two; i++)
        ans = ans * 2LL % 100;

    for (int i = 0; i < five; i++)
        ans = ans * 5LL % 100;

    cout << ans % 10 << endl;
}

int32_t main()
{
    _GORIBER_TURBO_MODE_ON();
    precal();
    int t = 1;
    int p, m;
    while (cin >> p >> m)
        _DIBBA(p, m);
    return 0;
}