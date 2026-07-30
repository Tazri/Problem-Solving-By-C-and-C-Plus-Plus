// link : https://codeforces.com/problemset/problem/1659/C
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'
#define int ll
#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

void _DIBBA(int _DIBBA_NO)
{
    int n, a, b;
    cin >> n >> a >> b;

    vector<int> v(n + 2, 0);
    for (int i = 1; i <= n; i++)
        cin >> v[i];
    vector<int> suff(n + 2, 0);

    for (int i = n; i >= 0; i--)
        suff[i] = suff[i + 1] + v[i];

    int mn;
    for (int i = 0; i <= n; i++)
    {
        int cost = v[i] * (a + b);

        int left = n - i;
        int midb = v[i] * b;
        int sum = suff[i + 1];
        cost += ((b * sum) - (left * midb));

        if (i == 0)
            mn = cost;
        mn = min(mn, cost);
    }

    cout << mn << endl;
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