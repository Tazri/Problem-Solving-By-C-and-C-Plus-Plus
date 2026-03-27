// link : https://codeforces.com/contest/2059/problem/B
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
    int n, k;
    cin >> n >> k;
    vector<int> v(n + 1);

    for (int i = 1; i <= n; i++)
        cin >> v[i];

    if (n == k)
    {
        int curr = 1;

        for (int i = 2; i <= n; i += 2)
        {
            if (v[i] != curr)
            {
                cout << curr << endl;
                return;
            }
            curr++;
        }

        cout << curr << endl;
        return;
    }

    int m = n - (k - 2);

    for (int i = 2; i <= m; i++)
    {
        if (v[i] != 1)
        {
            cout << 1 << endl;
            return;
        }
    }

    cout << 2 << endl;
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