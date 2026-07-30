// link : https://www.codechef.com/problems/PALINPAIN
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

string create(int x, int y, bool flag)
{
    int n = x + y;
    string ans(n, ' ');

    if (n & 1)
    {
        char ch = x & 1 ? 'a' : 'b';
        if (x & 1)
            x--;
        else
            y--;

        int mi = n / 2;
        ans[mi] = ch;
    }

    int l = 0;
    int r = n - 1;
    while (l < r)
    {
        if (x == 0 || y == 0)
        {
            char ch = x > 0 ? 'a' : 'b';
            ans[l] = ch;
            ans[r] = ch;
            if (ch == 'a')
                x -= 2;
            else
                y -= 2;
            l++;
            r--;
            continue;
        }

        char ch = flag ? 'a' : 'b';
        flag = !flag;

        if (ch == 'a')
            x -= 2;
        else
            y -= 2;

        ans[l] = ch;
        ans[r] = ch;
        l++;
        r--;
    }

    return ans;
}

void _DIBBA(int _DIBBA_NO)
{
    int x, y;
    cin >> x >> y;

    if ((x & 1) && (y & 1))
    {
        cout << -1 << endl;
        return;
    }

    if (x == 0 || y == 0 || y == 1 || x == 1)
    {
        cout << -1 << endl;
        return;
    }

    string ans1 = create(x, y, true);
    string ans2 = create(x, y, false);

    cout << ans1 << endl;
    cout << ans2 << endl;
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