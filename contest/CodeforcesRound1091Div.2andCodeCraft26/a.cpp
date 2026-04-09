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
    int n, k;
    cin >> n >> k;

    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        int ai;
        cin >> ai;
        sum += ai;
    }

    if (sum & 1)
    {
        cout << "YES" << endl;
        return;
    }
    int alt = n * k;

    if (alt % 2 == 0)
    {
        cout << "YES" << endl;
        return;
    }

    cout << "NO" << endl;
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