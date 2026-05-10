// link : https://codeforces.com/problemset/problem/1519/C
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
    vector<vector<int>> v(n + 1);
    vector<int> uni(n + 1);
    vector<int> skill(n + 1);

    vector<int> ans(n + 1);

    for (int i = 1; i <= n; i++)
        cin >> uni[i];

    for (int i = 1; i <= n; i++)
    {
        cin >> skill[i];

        v[uni[i]].push_back(skill[i]);
    }

    for (int i = 1; i <= n; i++)
    {
        sort(v[i].rbegin(), v[i].rend());

        for (int j = 1; j < v[i].size(); j++)
            v[i][j] += v[i][j - 1];

        int sz = v[i].size();
        for (int k = 1; k <= n; k++)
        {
            if (sz / k <= 0)
                break;

            int tms = sz / k;
            int indx = (tms * k) - 1;

            ans[k] += v[i][indx];
        }
    }

    for (int i = 1; i <= n; i++)
        cout << ans[i] << " \n"[i == n];
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