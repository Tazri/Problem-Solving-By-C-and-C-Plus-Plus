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
    int a, b;
    cin >> a >> b;

    if (b == 1)
    {
        cout << "Yes" << endl;
        return;
    }

    if (a == 1)
    {
        cout << "No" << endl;
        return;
    }

    int g = gcd(a, b);

    if (g == 1)
    {
        cout << "No" << endl;
        return;
    }

    while (g > 1)
    {
        while (b % g == 0)
        {
            b /= g;
        }

        if (b == 1)
        {
            cout << "Yes" << endl;
            return;
        }

        g = gcd(b, a);
    }

    cout << "No" << endl;
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