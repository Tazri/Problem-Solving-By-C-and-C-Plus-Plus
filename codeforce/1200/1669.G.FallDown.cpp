// link : https://codeforces.com/contest/1669/problem/G
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
    int n, m;
    cin >> n >> m;
    vector<string> grid(n);

    for (int i = 0; i < n; i++)
        cin >> grid[i];

    for (int j = 0; j < m; j++)
    {
        int li = n - 1;

        while (li >= 0 && grid[li][j] != '.')
            li--;

        if (li < 0)
            continue;

        int k = li - 1;
        while (k >= 0)
        {
            if (grid[k][j] == '.')
            {
                k--;
                continue;
            }

            if (grid[k][j] == '*')
            {
                swap(grid[li][j], grid[k][j]);
                li--;

                while (li >= 0 && grid[li][j] != '.')
                    li--;

                if (li < 0)
                    break;

                if (li <= k)
                    k = li - 1;
                continue;
            }

            li = k - 1;

            while (li >= 0 && grid[li][j] != '.')
                li--;

            if (li < 0)
                break;

            if (li <= k)
                k = li - 1;
        }
    }

    for (string &s : grid)
        cout << s << endl;
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