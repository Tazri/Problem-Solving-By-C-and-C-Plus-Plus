// link: https://codeforces.com/problemset/problem/932/B
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

int sz = 1e6;
vector<int> dp(sz + 123, -1);
vector<vector<int>> pre(10, vector<int>(sz + 1, 0));

int g(int n)
{
    if (n < 10)
    {
        dp[n] = n;
        return n;
    }

    if (dp[n] != -1)
        return dp[n];

    int ans = 1;
    int cn = n;
    while (cn)
    {
        int d = cn % 10;
        cn /= 10;
        if (d)
            ans *= d;
    }

    ans = g(ans);
    dp[n] = ans;
    return ans;
}

void build()
{
    for (int i = 1; i <= sz; i++)
    {
        g(i);
        pre[dp[i]][i] = 1;
    }

    for (int i = 1; i <= sz; i++)
    {
        for (int k = 1; k <= 9; k++)
        {
            pre[k][i] += pre[k][i - 1];
        }
    }
}

void program()
{
    int l, r, k;
    cin >> l >> r >> k;

    int cnt = pre[k][r] - pre[k][l - 1];

    cout << cnt << endl;
}

int32_t main()
{
    optimize();
    build();
    int t;
    cin >> t;
    while (t--)
        program();
    return 0;
}