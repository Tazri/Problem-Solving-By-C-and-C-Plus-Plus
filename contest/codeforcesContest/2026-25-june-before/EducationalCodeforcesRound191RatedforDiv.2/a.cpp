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

    int n, x, y, z;
    cin >> n >> x >> y >> z;

    int xy = x + y;
    int base = (n + xy - 1) / xy;
    int oneXtake = (n + x - 1) / x;
    int left = max(n - (z * x), 0LL);
    int pxy = x + (y * 10);
    int aiTake = z + ((left + pxy - 1) / pxy);

    cout << min({base, oneXtake, aiTake}) << endl;
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