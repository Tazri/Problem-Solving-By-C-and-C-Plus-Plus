// link : https://codeforces.com/contest/1091/problem/C
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

int getSm(int n, int d)
{
    int f = 1;
    int l = 1 + (n - 1) * d;

    int sum = (n * (f + l)) / 2;

    return sum;
}

void _DIBBA(int _DIBBA_NO)
{
    int n;
    cin >> n;

    vector<int> v;

    for (int i = 1; i * i <= n; i++)
    {
        if (n % i != 0)
            continue;

        v.push_back(i);

        if (n / i != i)
        {
            v.push_back(n / i);
        }
    }

    vector<int> ans;
    ans.reserve(v.size());

    for (int vi : v)
    {
        ans.push_back(getSm(n / vi, vi));
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