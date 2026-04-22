// link : https://codeforces.com/problemset/problem/808/B
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'
#define fraction()                \
    cout.unsetf(ios::floatfield); \
    cout.precision(10);           \
    cout.setf(ios::fixed, ios::floatfield)
#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

#define int ll

void _DIBBA(int _DIBBA_NO)
{
    int n, k;
    cin >> n >> k;

    int sum = 0;

    vector<int> v(n + 1);

    for (int i = 1; i <= n; i++)
        cin >> v[i];

    int sub = 0;
    for (int i = 1; i <= k; i++)
    {
        sub += v[i];
    }

    sum += sub;

    for (int l = 1, r = k + 1; r <= n; r++, l++)
    {
        sub -= v[l];
        sub += v[r];
        sum += sub;
    }

    double dsum = (double)sum;

    double ans = (dsum) / (double)(n - k + 1);

    cout << ans << endl;
}

int32_t main()
{
    _GORIBER_TURBO_MODE_ON();
    fraction();
    int t = 1;
    // cin >> t;
    for (int i = 1; i <= t; i++)
        _DIBBA(i);
    return 0;
}