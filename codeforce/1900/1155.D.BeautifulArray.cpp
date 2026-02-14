// link : https://codeforces.com/problemset/problem/1155/D
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;

#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)
#define fraction()                \
    cout.unsetf(ios::floatfield); \
    cout.precision(10);           \
    cout.setf(ios::fixed, ios::floatfield)

#define int ll

void program()
{
    int n, x;
    cin >> n >> x;

    vector<int> a(n + 1);
    vector<int> b(n + 1);
    vector<int> dp(n + 1);
    vector<int> suff(n + 2);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        dp[i] = a[i];
        suff[i] = a[i];
        b[i] = a[i] * x;
    }

    for (int i = 1; i <= n; i++)
    {
        dp[i] = max({dp[i], dp[i - 1] + dp[i], (ll)0});
    }

    for (int i = n; i >= 1; i--)
    {
        suff[i] = max({suff[i], (ll)0, suff[i + 1] + suff[i]});
    }

    vector<int> dp1(n + 1);

    for (int i = 1; i <= n; i++)
    {
        dp1[i] = max({dp[i], dp1[i - 1] + b[i]});
    }

    // for (int i = 1; i <= n; i++)
    //     cout << suff[i] << " \n"[i == n];
    // for (int i = 1; i <= n; i++)
    //     cout << dp1[i] << " \n"[i == n];

    int mx = 0;

    for (int i = 1; i <= n; i++)
    {
        int h = max({dp1[i], (ll)0, dp1[i] + suff[i + 1]});
        mx = max(mx, h);
    }

    cout << mx << endl;
}

int32_t main()
{
    optimize();
    program();
    return 0;
}