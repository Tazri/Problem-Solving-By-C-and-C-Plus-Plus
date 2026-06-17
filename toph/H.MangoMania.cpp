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
    int n, k, x;
    cin >> n >> k >> x;
    vector<int> v(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> v[i];

    vector<int> pregrter(n + 1);
    vector<int> preless(n + 1);

    for (int i = 1; i <= n; i++)
    {
        if (v[i] >= x)
            pregrter[i] = 1;
        else
            pregrter[i] = -1;

        if (v[i] <= x)
            preless[i] = 1;
        else
            preless[i] = -1;
    }

    for (int i = 1; i <= n; i++)
    {
        pregrter[i] += pregrter[i - 1];
        preless[i] += preless[i - 1];
    }
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