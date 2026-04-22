// link : https://codeforces.com/problemset/problem/1955/C
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

    int f = (k + 1) / 2;
    int l = k / 2;

    vector<int> v(n);

    for (int i = 0; i < n; i++)
        cin >> v[i];

    for (int i = 0; i < n; i++)
    {
        int mn = min(v[i], f);
        v[i] -= mn;
        f -= mn;

        if (f == 0)
            break;
    }

    for (int i = n - 1; i >= 0; i--)
    {
        int mn = min(v[i], l);
        v[i] -= mn;
        l -= mn;
    }

    int ans = 0;

    for (int &vi : v)
        if (!vi)
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