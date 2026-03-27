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
    cout << "Case " << _DIBBA_NO << ": ";

    int w;
    cin >> w;

    if (w & (1LL))
    {
        cout << "Impossible" << endl;
        return;
    }

    int n = 1;
    int m = w;

    while (m % 2 == 0)
    {
        m /= 2;
        n *= 2;
    }

    cout << m << " " << n << endl;
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