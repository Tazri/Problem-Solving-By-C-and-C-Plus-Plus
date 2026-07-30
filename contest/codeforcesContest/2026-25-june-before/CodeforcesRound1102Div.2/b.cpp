#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define int ll
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

void _DIBBA(int _DIBBA_NO)
{
    int n;
    cin >> n;

    int k = n % 12;

    if (k < 10 || k == 11)
    {
        cout << k << " " << n - k << endl;
        return;
    }

    n -= k;
    int a = 10;
    if (n < 12)
    {
        cout << -1 << endl;
        return;
    }

    a += 12;
    n -= 12;
    cout << a << " " << n << endl;
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