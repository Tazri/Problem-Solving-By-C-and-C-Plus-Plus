// link : https://codeforces.com/problemset/problem/1143/C
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
    vector<bool> safe(n + 1, true);
    vector<int> parents(n + 1, 0);

    for (int i = 1; i <= n; i++)
    {
        int p, c;
        cin >> p >> c;

        if (p == -1)
            continue;

        parents[i] = p;

        if (c)
            safe[i] = false;
    }

    vector<bool> vs = safe;
    for (int i = 1; i <= n; i++)
    {
        if (safe[i])
        {
            vs[parents[i]] = true;
        }
    }

    vector<int> ans;

    for (int i = 1; i <= n; i++)
        if (!vs[i])
            ans.push_back(i);

    if (ans.size() <= 0)
    {
        cout << -1 << endl;
        return;
    }

    sort(ans.begin(), ans.end());

    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << " \n"[i == ans.size() - 1];
}

int32_t main()
{
    _GORIBER_TURBO_MODE_ON();

    int t = 1;
    // cin >> t;
    for (int i = 1; i <= t; i++)
        _DIBBA(i);
    return 0;
}