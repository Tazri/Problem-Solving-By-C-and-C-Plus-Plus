// link : https://codeforces.com/problemset/problem/1350/B
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
    vector<int> s(n + 1);
    vector<int> v(n + 1);

    for (int i = 1; i <= n; i++)
        cin >> s[i];

    for (int i = 1; i <= n; i++)
    {
        v[i] = 1;
        vector<int> d;
        for (int j = 1; j * j <= i; j++)
        {
            if (i % j != 0)
                continue;

            int d1 = j;
            int d2 = i / j;

            if (d1 != i)
                d.push_back(d1);

            if (d2 != i && d1 != d2)
                d.push_back(d2);
        }

        for (int di : d)
        {
            if (s[di] < s[i])
                v[i] = max(v[i], v[di] + 1);
        }
    }

    int mx = v[1];

    for (int i = 1; i <= n; i++)
        mx = max(v[i], mx);

    cout << mx << endl;
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