#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

void _DIBBA()
{
    int x, y, n;
    cin >> x >> y >> n;

    if (y == 0)
    {
        int ans = x * (n / x);
        cout << ans << endl;
    }
    else if (n % x == y)
    {
        cout << n << endl;
    }
    else
    {
        int left = n - y;

        int ex = left - (left % x);
        int ans = ex + y;
        cout << ans << endl;
    }
}

int32_t main()
{
    _GORIBER_TURBO_MODE_ON();

    int t = 1;
    cin >> t;
    while (t--)
        _DIBBA();
    return 0;
}