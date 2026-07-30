// link : https://codeforces.com/problemset/problem/1829/G
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

int sz = 1500;
int rwsum[1502][1502];
int dp[1502][1502];

void precal()
{
    int n = 1;
    for (int rw = 1; rw <= sz; rw++)
    {
        for (int col = 1; col <= rw; col++)
        {
            int cell = n * n;
            rwsum[rw][col] += cell;
            rwsum[rw][col] += rwsum[rw - 1][col];
            n++;
        }
    }

    n = 1;
    for (int rw = 1; rw <= sz; rw++)
    {
        for (int col = 1; col <= rw; col++)
        {
            dp[rw][col] += (n * n);
            n++;
            dp[rw][col] += dp[rw - 1][col - 1];
            dp[rw][col] += rwsum[rw - 1][col];
        }
    }
}

int fnd(int n)
{
    int l = 0;
    int r = 1500;
    int ans = 0;
    while (l <= r)
    {
        int mid = l + (r - l) / 2;

        int sum = (mid * (mid + 1)) / 2;

        if (sum < n)
        {
            ans = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    return ans;
}

int fsum(int n)
{
    return (n * (n + 1)) / 2;
}

void _DIBBA(int _DIBBA_NO)
{
    int n;
    cin >> n;
    int pr = fnd(n);

    int i = pr + 1;
    int j = n - fsum(pr);

    // cout << "rwsum : " << rwsum[i][j] << endl;
    cout << dp[i][j] << endl;
}

int32_t main()
{
    _GORIBER_TURBO_MODE_ON();
    precal();
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++)
        _DIBBA(i);
    return 0;
}