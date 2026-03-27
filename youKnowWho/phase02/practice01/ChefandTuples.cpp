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
    int n, a, b, c;

    cin >> n >> a >> b >> c;

    vector<int> d;

    for (int i = 1; i * i <= n; i++)
    {
        if (n % i != 0)
            continue;

        d.push_back(i);

        if ((n / i) != i)
            d.push_back(n / i);
    }

    sort(d.begin(), d.end());

    int cnt = 0;
    // for (int di : d)
    //     cout << di << " ";
    // cout << endl;
    // cout << d.size() << endl;
    for (int i = 0; d[i] <= a && i < d.size(); i++)
    {
        for (int j = 0; d[j] <= b && j < d.size(); j++)
        {
            int xy = d[i] * d[j];
            if (xy > n)
                break;

            if (n % xy != 0)
                continue;
            int z = n / xy;

            if (z <= c)
                cnt++;
        }
    }

    cout << cnt << endl;
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