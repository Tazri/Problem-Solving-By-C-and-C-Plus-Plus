// link : https://codeforces.com/problemset/problem/2188/C
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
    vector<int> v(n);
    vector<int> sv(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        sv[i] = v[i];
    }

    sort(sv.begin(), sv.end());

    int ans = -1;
    int mn = sv.front();
    int mx = sv.back();

    for (int i = 0; i < n; i++)
    {
        if (sv[i] == v[i])
            continue;

        int d = max(v[i] - mn, mx - v[i]);
        if (ans == -1)
            ans = d;
        ans = min(d, ans);
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