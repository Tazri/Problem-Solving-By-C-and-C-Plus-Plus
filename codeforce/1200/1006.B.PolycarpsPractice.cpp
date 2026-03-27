// link : https://codeforces.com/problemset/problem/1006/B
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
    int n, k;
    cin >> n >> k;
    vector<pair<int, int>> v(n);
    vector<int> arr(n + 1);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i].first;
        v[i].second = i + 1;
        arr[i + 1] = v[i].first;
    }

    sort(v.rbegin(), v.rend());

    vector<int> d;
    d.push_back(0);
    d.push_back(n + 1);

    for (int i = 0; i < k; i++)
        d.push_back(v[i].second);

    sort(d.begin(), d.end());
    int sum = 0;
    vector<int> ans;
    ans.reserve(k);

    for (int i = 1; i < d.size() - 1; i++)
    {
        sum += arr[d[i]];

        if (i == d.size() - 2)
        {
            ans.push_back(d[i] - d[i - 1] + n - d[i]);
        }
        else
            ans.push_back(d[i] - d[i - 1]);
    }

    cout << sum << endl;
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