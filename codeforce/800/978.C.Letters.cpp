// link : https://codeforces.com/problemset/problem/978/C
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
    int n, m;
    cin >> n >> m;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    vector<int> pre(n);

    for (int i = 0; i < n; i++)
    {
        pre[i] += (i == 0 ? 0 : pre[i - 1]) + v[i];
    }

    for (int i = 0; i < m; i++)
    {
        int qi;
        cin >> qi;
        int index = lower_bound(pre.begin(), pre.end(), qi) - pre.begin();

        int room = v[index] - (pre[index] - qi);
        cout << index + 1 << " " << room << endl;
    }
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