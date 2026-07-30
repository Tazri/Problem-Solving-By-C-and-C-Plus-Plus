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

void _DIBBA(int _DIBBA_NO)
{
    int n, k;
    cin >> n >> k;

    vector<vector<int>> v(n + 1, vector<int>(n + 1));

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> v[i][j];
        }
    }

    int ans = 0;
    for (int i = 1; i <= k; i++)
    {
        for (int j = 1; j <= k; j++)
        {
            if (v[i][j] == 0)
                continue;

            ans += v[i][j];
            v[i][j] = 0;
            v[j][i] = 0;
        }
    }

    for (int i = k + 1; i <= n; i++)
    {
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

/*

0 1 4 2
1 0 2 2
4 2 0 3
2 2 3 0

0 0 0 0
0 0 0 0
0 0 0 3
0 0 3 0

4 + 1 + 2 + 2 + 2= 11

0 0 1 11
0 0 7 9
1 7 0 5 ->
11 9 5 0 ->

5 +

*/