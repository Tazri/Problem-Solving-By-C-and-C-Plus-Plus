// link : https://codeforces.com/contest/2232/problem/C1
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

int fcnt(string &s, int x, int st, int lim)
{
    int cnt = 0;
    int curr = 0;
    for (char ch : s)
    {
        if (ch == 'E')
        {
            if (curr > 0)
            {
                cnt++;
                curr--;
            }
            continue;
        }

        if (ch == 'I')
        {
            if (x > 0)
            {
                x--;
                cnt++;
                curr += st - 1;
            }
            continue;
        }

        if (lim > 0)
        {
            lim--;
            if (x > 0)
            {
                x--;
                cnt++;
                curr += st - 1;
            }
            continue;
        }

        if (curr > 0)
        {
            cnt++;
            curr--;
        }
    }

    return cnt;
}

void _DIBBA(int _DIBBA_NO)
{
    int n, x, st;
    cin >> n >> x >> st;
    string s;
    cin >> s;

    int ans = fcnt(s, x, st, 0);

    int acount = 0;

    for (char ch : s)
    {
        if (ch == 'A')
            acount++;
    }

    int r = min(acount, x);

    if (r == 0)
    {
        cout << ans << endl;
        return;
    }

    int l = 1;

    while (l <= r)
    {
        int mid = l + (r - l) / 2;

        int prev = fcnt(s, x, st, mid - 1);
        int curr = fcnt(s, x, st, mid);

        if (prev < curr)
        {
            ans = curr;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
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