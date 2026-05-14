// link : https://codeforces.com/problemset/problem/1110/B
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
    int n, m, k;
    cin >> n >> m >> k;

    vector<int> v(n);

    for (int i = 0; i < n; i++)
        cin >> v[i];

    int ans = v.back() - v.front() + k;

    vector<int> d;

    for (int i = 1; i < n; i++)
        d.push_back(v[i - 1] - v[i]);

    sort(d.begin(), d.end());

    for (int i = 0; i < k - 1 && i < d.size(); i++)
        ans += d[i];

    cout << ans << endl;
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