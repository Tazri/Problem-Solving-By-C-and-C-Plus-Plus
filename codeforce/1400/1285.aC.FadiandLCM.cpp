// link : https://codeforces.com/problemset/problem/1285/C
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

void _DIBBA(int _DIBBA_NO)
{
    int n;
    cin >> n;

    int mn = 1;
    int mx = n;

    for (int i = 1; i * i <= n; i++)
    {
        if (n % i != 0)
            continue;

        int a = i;
        int b = n / i;

        if (gcd(a, b) == 1)
        {
            int s = min(a, b);
            int x = max(a, b);

            if (x < mx)
            {
                mn = s;
                mx = x;
            }
        }
    }

    cout << mn << " " << mx << endl;
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