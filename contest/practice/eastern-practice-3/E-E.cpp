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
/*
2, 3, 5, 7

4,6,8

0,1,4,6,8,9

(1,4,6) 1 (1,9)

*/

vector<int> valid = {0, 1, 4, 6, 8, 9};
int mod = 998244353;
int n;
int N = 1e6 + 123;
int dp[2][2][1000012];

vector<int> getOptions(int i, bool one, bool foursix)
{
    vector<int> op;

    for (int oi : valid)
    {
        if (oi == 0)
        {
            if (i == 0)
                continue;
            op.push_back(0);
            continue;
        }

        if (oi == 1)
        {
            bool found = one | foursix;

            if (found)
                continue;
            op.push_back(1);
            continue;
        }

        if (oi == 9)
        {
            if (one)
                continue;
            op.push_back(9);
            continue;
        }

        op.push_back(oi);
    }

    return op;
}

int call = 0;
int solve(int i = 0, bool one = false, bool foursix = false)
{
    if (i >= n)
        return 1;

    if (dp[one][foursix][i] != -1)
    {
        return dp[one][foursix][i];
    }
    call++;
    vector<int> op = getOptions(i, one, foursix);

    int ans = 0;
    for (int oi : op)
    {
        bool nxtone = one, nxtfoursix = foursix;
        if (oi == 1)
            nxtone = true;
        else if (oi == 4 || oi == 6)
            nxtfoursix = true;

        ans += solve(i + 1, nxtone, nxtfoursix);
        ans %= mod;
    }

    dp[one][foursix][i] = ans;
    return ans;
}

void _DIBBA(int _DIBBA_NO)
{
    cin >> n;
    cout << solve(0, false, false) << endl;
    cout << "call : " << call << endl;
}

int32_t main()
{
    _GORIBER_TURBO_MODE_ON();
    memset(dp, -1, sizeof dp);
    int t = 1;
    // cin >> t;
    for (int i = 1; i <= t; i++)
        _DIBBA(i);
    return 0;
}