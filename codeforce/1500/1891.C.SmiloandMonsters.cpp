// link : https://codeforces.com/problemset/problem/1891/C
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
    vector<int> v(n);
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        sum += v[i];
    }
    sort(v.begin(), v.end());

    int can = (sum + 1) / 2;

    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (can == 0)
            break;

        int mn = min(can, v[i]);
        v[i] -= mn;
        can -= mn;
        ans += mn;
    }

    for (int i = 0; i < n; i++)
        if (v[i])
            ans++;

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