// linK : https://codeforces.com/problemset/problem/1466/D
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
    int n;
    cin >> n;
    vector<int> w(n + 1);
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> w[i];
        sum += w[i];
    }

    vector<int> degree(n + 1);

    for (int i = 1; i <= n - 1; i++)
    {
        int from, to;
        cin >> from >> to;
        degree[from]++;
        degree[to]++;
    }

    vector<pair<int, int>> v;

    for (int i = 1; i <= n; i++)
    {
        if (degree[i] <= 1)
            continue;

        v.push_back({w[i], degree[i] - 1});
    }

    sort(v.rbegin(), v.rend());

    vector<int> ans;
    ans.push_back(0);
    ans.push_back(sum);

    for (int i = 0; i < v.size(); i++)
    {
        for (int t = 1; t <= v[i].second; t++)
            ans.push_back(sum + (v[i].first * t));

        sum += (v[i].first * v[i].second);
    }

    for (int i = 1; i <= n - 1; i++)
        cout << ans[i] << " \n"[i == n - 1];
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