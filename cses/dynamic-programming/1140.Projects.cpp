// linK : https://cses.fi/problemset/task/1140/
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

struct Project
{
    int start, end, cost;
};

int n;
vector<Project> v;
vector<int> dp;

int solve(int i)
{
    if (i >= n)
        return 0;

    if (dp[i] != -1)
        return dp[i];

    int ans1 = solve(i + 1);
    int ans2 = v[i].cost;

    int end = v[i].end;
    int l = 0;
    int r = n - 1;
    int nxti = n;
    while (l <= r)
    {
        int mid = l + (r - l) / 2;

        if (end < v[mid].start)
        {
            nxti = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }

    ans2 += solve(nxti);
    dp[i] = max(ans1, ans2);
    return dp[i];
}

void _DIBBA(int _DIBBA_NO)
{
    cin >> n;
    v = vector<Project>(n);
    dp = vector<int>(n, -1);
    for (int i = 0; i < n; i++)
        cin >> v[i].start >> v[i].end >> v[i].cost;

    sort(v.begin(), v.end(), [](Project a, Project b)
         {
        if(a.start == b.start)return a.end < b.end;
        return a.start < b.start; });

    cout << solve(0) << endl;
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