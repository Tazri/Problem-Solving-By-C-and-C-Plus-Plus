// link : https://codeforces.com/contest/2231/problem/B
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

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int mx = -1;

    for (int i = 1; i < n; i++)
    {
        if (v[i - 1] <= v[i])
            continue;

        int d = v[i - 1] - v[i];
        mx = max(d, mx);
    }

    if (mx == -1)
    {
        cout << "YES" << endl;
        return;
    }

    for (int i = 1; i < n; i++)
    {
        if (v[i - 1] > v[i])
            v[i] += mx;
    }

    for (int i = 1; i < n; i++)
        if (v[i - 1] > v[i])
        {
            cout << "NO" << endl;
            return;
        }

    cout << "YES" << endl;
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