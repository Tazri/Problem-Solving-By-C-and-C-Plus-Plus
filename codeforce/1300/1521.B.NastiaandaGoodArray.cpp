// link : https://codeforces.com/problemset/problem/1521/B
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

    int mni = 1;
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];

        if (v[i] < v[mni])
            mni = i;
    }

    int mn = v[mni];
    if (mni != 1)
    {
        cout << n << endl;
        cout << 1 << " " << mni << " " << mn << " " << mn << endl;
    }
    else
    {
        cout << n - 1 << endl;
    }

    for (int i = 2; i <= n; i++)
        cout << 1 << " " << i << " " << mn << " " << (mn + i - 1) << endl;
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