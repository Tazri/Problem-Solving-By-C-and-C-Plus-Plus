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

int mod = 10000007;
int a, b, c, d, e, f;
int fn(int n)
{
    if (n == 0)
        return a;
    if (n == 1)
        return b;
    if (n == 2)
        return c;
    if (n == 3)
        return d;
    if (n == 4)
        return e;
    if (n == 5)
        return f;

    return fn(n - 1) + fn(n - 2) + fn(n - 3) + fn(n - 4) + fn(n - 5) + fn(n - 6);
}

void _DIBBA(int _DIBBA_NO)
{
    int n, cases;
    cin >> cases;
    for (int caseno = 1; caseno <= cases; ++caseno)
    {
        cin >> a >> b >> c >> d >> e >> f >> n;
        vector<int> v(n + 123);
        v[0] = a % mod;
        v[1] = b % mod;
        v[2] = c % mod;
        v[3] = d % mod;
        v[4] = e % mod;
        v[5] = f % mod;

        for (int i = 6; i <= n; i++)
        {
            for (int j = 1; j <= 6; j++)
                v[i] = (v[i] + v[i - j]) % mod;
        }

        cout << "Case " << caseno << ": " << v[n] << endl;
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