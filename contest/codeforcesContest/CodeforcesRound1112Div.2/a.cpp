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
    vector<int> v(n + 1);

    for (int i = 1; i <= n; i++)
        cin >> v[i];

    if (n & 1)
    {
        cout << "NO" << endl;
        return;
    }

    int mx = v[2];
    for (int i = 2; i <= n; i += 2)
    {
        if (v[i - 1] <= v[i])
        {
            cout << "NO" << endl;
            return;
        }
        mx = max(v[i], mx);
    }

    int k = mx + 1;
    for (int i = 1; i <= n; i += 2)
    {
        if (v[i] <= k)
        {
            cout << "NO" << endl;
            return;
        }
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