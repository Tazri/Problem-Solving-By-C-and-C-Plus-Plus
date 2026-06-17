// link : https://codeforces.com/contest/2233/problem/C
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

void _DIBBA(int _DIBBA_NO)
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    int last = -1;
    int stk = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '(')
        {
            stk++;
            continue;
        }

        if (stk <= 0)
        {
            last = i;
            continue;
        }
        stk--;
    }

    string ans(n, ' ');
    int left = k;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == ')')
        {
            if (i <= last)
            {
                ans[i] = '0';
                continue;
            }

            if (left <= 0)
            {
                ans[i] = '0';
                continue;
            }

            left--;
            ans[i] = '1';
            continue;
        }

        if (i > last)
        {
            ans[i] = '0';
            continue;
        }

        if (left <= 0)
        {
            ans[i] = '0';
            continue;
        }

        ans[i] = '1';
        left--;
    }

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