// link : https://codeforces.com/contest/2206/problem/K
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

bool canCreateTypeY(int c1, int c01, int c05, int c09, int x)
{
    if (c1 < x)
        return false;
    c1 -= x;
    c01 -= x;
    c05 -= x;
    c09 -= x;

    if (c01 < x)
        return false;

    c01 -= x;
    c05 -= x;
    c09 -= x;

    if (c05 < x)
        return false;

    c05 -= x;
    c09 -= x;
    if (c09 < x)
        return false;
    return true;
}

void _DIBBA(int _DIBBA_NO)
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    vector<int> mp(10);

    for (int i = 0; i < n; i++)
        mp[(int)s[i] - (int)'0']++;

    int C0 = mp[0];
    int C01 = mp[0] + mp[1];
    int C09 = n;
    int C05 = mp[0] + mp[1] + mp[2] + mp[3] + mp[4] + mp[5];

    int ans = 0;
    for (int x = 0; x <= mp[0]; x++)
    {
        vector<int> v = mp;

        if (x > v[0])
            break;

        v[0] -= x;
        int left = x;
        for (int j = 5; j >= 0; j--)
        {
            int mn = min(v[j], left);
            v[j] -= mn;
            left -= mn;
        }

        if (left)
            break;

        left = x;
        for (int j = 9; j >= 0; j--)
        {
            int mn = min(v[j], left);
            v[j] -= mn;
            left -= mn;
        }

        if (left)
            break;

        left = x;

        for (int j = 9; j >= 0; j--)
        {
            int mn = min(v[j], left);
            v[j] -= mn;
            left -= mn;
        }

        if (left)
            break;

        int c1 = v[1];
        int c01 = v[0] + v[1];
        int c05 = v[0] + v[1] + v[2] + v[3] + v[4] + v[5];
        int c09 = 0;

        for (int i = 0; i < 10; i++)
            c09 += v[i];

        left = 1;
        int right = c09;
        int y = 0;
        while (left <= right)
        {
            int mid = left + (right - left) / 2;

            if (canCreateTypeY(c1, c01, c05, c09, mid))
            {
                y = mid;
                left = mid + 1;
            }
            else
            {
                right = mid - 1;
            }
        }

        ans = max(ans, x + y);
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