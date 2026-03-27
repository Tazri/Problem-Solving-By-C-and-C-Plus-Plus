// link : https://codeforces.com/problemset/problem/1203/C
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

    vector<int> v(n);
    int g = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];

        g = gcd(g, v[i]);
    }

    if (g == 1)
    {
        cout << 1 << endl;
        return;
    }

    int cnt = 0;

    for (int i = 1; i * i <= g; i++)
    {
        if (g % i != 0)
            continue;

        cnt++;

        if (g / i != i)
            cnt++;
    }

    cout << cnt << endl;
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