#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

void _DIBBA(int _DIBBA_NO)
{
    int n;
    cin >> n;
    int three = 0;
    int two = 0;

    while (n % 2 == 0)
    {
        two++;
        n /= 2;
    }

    while (n % 3 == 0)
    {
        three++;
        n /= 3;
    }

    if (n != 1 || two > three)
    {
        cout << -1 << endl;
        return;
    }

    cout << two + 2 * (three - two) << endl;
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