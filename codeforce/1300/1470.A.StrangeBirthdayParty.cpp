// link : https://codeforces.com/problemset/problem/1470/A
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
    int n, m;
    cin >> n >> m;
    vector<int> v(n);

    vector<int> c(m + 1);

    for (int i = 0; i < n; i++)
        cin >> v[i];

    for (int i = 1; i <= m; i++)
        cin >> c[i];

    sort(v.rbegin(), v.rend());

    int ans = 0;
    int point = 1;
    for (int &vi : v)
    {
        if (point > m)
        {
            ans += c[vi];
            continue;
        }

        if (point >= vi)
        {
            ans += c[vi];
            continue;
        }

        ans += c[point++];
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