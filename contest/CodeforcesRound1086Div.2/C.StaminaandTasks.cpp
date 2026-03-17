#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

#define fraction()                \
    cout.unsetf(ios::floatfield); \
    cout.precision(10);           \
    cout.setf(ios::fixed, ios::floatfield)

#define int ll

void _DIBBA(int _DIBBA_NO)
{
    int n;
    cin >> n;
    vector<pair<double, double>> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i].first;
        dl p;
        cin >> p;

        v[i].second = (1.0 - (p / 100));
    }

    vector<double> dp(n);

    dp[n - 1] = v[n - 1].first;

    for (int i = n - 2; i >= 0; i--)
    {
        dl d1 = (v[i].second * dp[i + 1]) + v[i].first;
        dp[i] = max(d1, dp[i + 1]);
    }

    cout << dp[0] << endl;
}

int32_t main()
{
    fraction();
    _GORIBER_TURBO_MODE_ON();

    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++)
        _DIBBA(i);
    return 0;
}