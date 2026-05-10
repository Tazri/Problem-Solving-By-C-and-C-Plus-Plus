// link : https://codeforces.com/problemset/problem/1691/C
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
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
            cnt++;
        else
            break;
    }

    int cf = cnt;
    int cl = 0;

    for (int i = n - 1; i >= 0; i--)
    {
        if (s[i] == '0')
            cl++;
        else
            break;
    }

    int one = 0;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
            one++;
    }

    if (one == 0)
    {
        cout << 0 << endl;
        return;
    }

    if (one == 1)
    {
        if (cl <= k)
        {
            cout << 1 << endl;
            return;
        }

        if (cf <= k)
        {
            cout << 10 << endl;
            return;
        }

        cout << 11 << endl;
        return;
    }

    if (cl + cf <= k)
    {
        int ans = (one - 2) * 11;
        ans += 10 + 1;

        cout << ans << endl;
        return;
    }

    if (cl <= k)
    {
        int ans = (one - 1) * 11;
        ans += 1;
        cout << ans << endl;
        return;
    }

    if (cf <= k)
    {
        int ans = (one - 1) * 11;
        ans += 10;
        cout << ans << endl;
        return;
    }

    cout << one * 11 << endl;
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