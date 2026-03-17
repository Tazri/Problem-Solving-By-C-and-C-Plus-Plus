// link : https://codeforces.com/problemset/problem/1750/B
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

#define int ll

void _DIBBA(int _DIBBA_NO)
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    int zero = 0;
    int one = 0;

    if (s[0] == '0')
        zero++;
    else
        one++;

    int len = 1;
    int mx = 0;
    for (int i = 1; i < n; i++)
    {
        if (s[i] == '0')
            zero++;
        else
            one++;

        if (s[i] == s[i - 1])
            len++;
        else
        {
            mx = max(mx, len);
            len = 1;
        }
    }
    mx = max(mx, len);

    cout << max(mx * mx, zero * one) << endl;
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