// link : https://lightoj.com/problem/an-easy-lcs
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

string a, b;
vector<vector<string>> dp;
string solve(int i, int j)
{
    if (i >= a.size() || j >= b.size())
    {
        return "";
    }

    if (dp[i][j] != "-")
        return dp[i][j];

    string t1 = solve(i + 1, j);
    string t2 = solve(i, j + 1);

    string mx;

    if (t1.size() == t2.size())
        mx = t1 < t2 ? t1 : t2;
    else
        mx = t1.size() < t2.size() ? t2 : t1;

    if (a[i] == b[j])
    {
        string t3 = "";
        t3.push_back(a[i]);
        t3 += solve(i + 1, j + 1);

        if (t3.size() > mx.size())
        {
            mx = t3;
        }
        else if (t3.size() == mx.size())
        {
            mx = t3 < mx ? t3 : mx;
        }
    }

    dp[i][j] = mx;
    return mx;
}

void _DIBBA(int _DIBBA_NO)
{
    cout << "Case " << _DIBBA_NO << ": ";
    cin >> a >> b;
    dp = vector<vector<string>>(a.size(), vector<string>(b.size(), "-"));

    string ans = solve(0, 0);

    if (ans == "")
        cout << ":(" << endl;
    else
        cout << ans << endl;
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