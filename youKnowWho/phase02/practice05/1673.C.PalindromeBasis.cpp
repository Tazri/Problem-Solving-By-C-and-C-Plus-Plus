// link : https://codeforces.com/problemset/problem/1673/C
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

int sz = 4e4;
vector<int> dp(sz + 1);
vector<int> palindroms;
int mod = ((ll)1e9) + 7;

bool isPalindrome(int n)
{
    int rev = 0;
    int cp = n;
    while (n)
    {
        rev *= 10;
        rev += (n % 10);
        n /= 10;
    }

    return rev == cp;
}

void precal()
{
    for (int i = 1; i <= sz; i++)
    {
        if (isPalindrome(i))
            palindroms.push_back(i);
    }

    dp[0] = 1;
    for (int pi : palindroms)
    {
        for (int i = pi; i <= sz; i++)
        {
            dp[i] += dp[i - pi];
            dp[i] %= mod;
        }
    }
}

void _DIBBA(int _DIBBA_NO)
{
    int n;
    cin >> n;

    cout << dp[n] << endl;
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