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
    int n, x, y;
    cin >> n >> x >> y;

    vector<int> v(n);

    for (int i = 0; i < n; i++)
        cin >> v[i];

    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int f1 = (v[i] + v[j]) % x;
            f1 = (f1 % x + x) % x;

            int f2 = (v[i] - v[j]) % y;
            f2 = (f2 % y + y) % y;

            if (f1 == 0 && f2 == 0)
            {
                cnt++;
                cout << "i : " << i << " j : " << j << endl;
                cout << "a[i] : " << v[i] << " v[j] : " << v[j] << endl;
                cout << "--------" << endl;
            }
        }
    }
    cout << cnt << endl;
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