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
    int x, y;
    cin >> x >> y;

    int n = x + y;

    vector<int> v(n);

    for (int i = 0; i < x; i++)
    {
        v[i] = 1;
    }

    for (int i = x; i < n; i++)
        v[i] = -1;

    int d = abs(x - y);

    int cnt = 0;

    for (int i = 1; i * i <= d; i++)
    {
        if (d % i != 0)
            continue;

        cnt++;

        if (d / i != i)
            cnt++;
    }

    cout << max(cnt, 1LL) << endl;
    for (int i = 0; i < n; i++)
        cout << v[i] << " \n"[i == n - 1];
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