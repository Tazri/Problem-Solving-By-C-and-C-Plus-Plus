// link : https://codeforces.com/contest/1352/problem/E
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
    vector<int> v(n + 1);
    vector<bool> st(n + 1, false);

    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];

        v[i] += v[i - 1];
    }

    for (int l = 1; l <= n; l++)
    {
        for (int r = l + 1; r <= n; r++)
        {
            int sum = v[r] - v[l - 1];
            if (1 <= sum && sum <= n)
                st[sum] = true;
        }
    }

    int cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        int k = v[i] - v[i - 1];

        if (st[k])
            cnt++;
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