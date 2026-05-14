// link : https://codeforces.com/problemset/problem/2158/C
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
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    vector<int> b(n);
    vector<int> dp(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        dp[i] = a[i];
    }

    for (int i = 0; i < n; i++)
        cin >> b[i];

    for (int i = 1; i < n; i++)
        dp[i] = max(a[i], dp[i - 1] + a[i]);

    if (k % 2 == 0)
    {
        cout << *max_element(dp.begin(), dp.end()) << endl;

        return;
    }

    vector<int> dp1(n);

    dp1[0] = max(dp[0], a[0] + b[0]);

    for (int i = 1; i < n; i++)
    {
        int ap = a[i] + b[i];
        dp1[i] = max({dp[i - 1] + ap, ap, dp1[i - 1] + a[i]});
    }

    cout << *max_element(dp1.begin(), dp1.end()) << endl;
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