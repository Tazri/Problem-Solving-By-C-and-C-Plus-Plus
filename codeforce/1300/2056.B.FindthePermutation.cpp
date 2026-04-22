// link : https://codeforces.com/contest/2056/problem/B
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
    int n;
    cin >> n;

    vector<vector<bool>> g(n, vector<bool>(n, false));

    for (int i = 0; i < n; i++)
    {
        string l;
        cin >> l;

        for (int j = 0; j < n; j++)
        {
            if (l[j] == '1')
                g[i][j] = true;
        }
    }

    vector<int> ans(n);

    for (int i = 0; i < n; i++)
        ans[i] = i;

    sort(ans.begin(), ans.end(), [&g](int a, int b)
         {
        if(g[a][b]){
            return a < b;
        }else return a > b; });

    for (int i = 0; i < n; i++)
        cout << ans[i] + 1 << " \n"[i == n - 1];
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