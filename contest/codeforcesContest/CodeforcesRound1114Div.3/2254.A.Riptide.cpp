// link : https://codeforces.com/contest/2254/problem/A
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
    vector<int> v(3);

    for (int i = 0; i < 3; i++)
        cin >> v[i];

    sort(v.begin(), v.end());
    int mn = v[0];
    int mx = v.back();
    int mid = v[1];

    int ans = min(abs(mid - mn), abs(mid - mx));
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